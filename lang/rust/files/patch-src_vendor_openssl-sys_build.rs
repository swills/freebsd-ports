--- src/vendor/openssl-sys/build.rs.orig	2018-07-08 00:11:05 UTC
+++ src/vendor/openssl-sys/build.rs
@@ -9,7 +9,6 @@ use std::ffi::OsString;
 use std::fs::File;
 use std::io::{BufWriter, Write};
 use std::path::{Path, PathBuf};
-use std::panic::{self, AssertUnwindSafe};
 use std::process::Command;
 
 // The set of `OPENSSL_NO_<FOO>`s that we care about.
@@ -30,9 +29,8 @@ const DEFINES: &'static [&'static str] = &[
 ];
 
 enum Version {
-    Openssl110,
-    Openssl102,
-    Openssl101,
+    Openssl11x,
+    Openssl10x,
     Libressl,
 }
 
@@ -90,10 +88,8 @@ fn main() {
     let libs = match libs_env.as_ref().and_then(|s| s.to_str()) {
         Some(ref v) => v.split(":").collect(),
         None => match version {
-            Version::Openssl101 | Version::Openssl102 if target.contains("windows") => {
-                vec!["ssleay32", "libeay32"]
-            }
-            Version::Openssl110 if target.contains("windows") => vec!["libssl", "libcrypto"],
+            Version::Openssl10x if target.contains("windows") => vec!["ssleay32", "libeay32"],
+            Version::Openssl11x if target.contains("windows") => vec!["libssl", "libcrypto"],
             _ => vec!["ssl", "crypto"],
         },
     };
@@ -108,6 +104,8 @@ fn find_openssl_dir(target: &str) -> OsString {
     let host = env::var("HOST").unwrap();
 
     if host == target && target.contains("apple-darwin") {
+        // Check up default Homebrew installation location first
+        // for quick resolution if possible.
         let homebrew = Path::new("/usr/local/opt/openssl@1.1");
         if homebrew.exists() {
             return homebrew.to_path_buf().into();
@@ -116,6 +114,22 @@ fn find_openssl_dir(target: &str) -> OsString {
         if homebrew.exists() {
             return homebrew.to_path_buf().into();
         }
+        // Calling `brew --prefix <package>` command usually slow and 
+        // takes seconds, and will be used only as a last resort.
+        let output = execute_command_and_get_output("brew", &["--prefix", "openssl@1.1"]);
+        if let Some(ref output) = output {
+            let homebrew = Path::new(&output);
+            if homebrew.exists() {
+                return homebrew.to_path_buf().into();
+            }
+        }
+        let output = execute_command_and_get_output("brew", &["--prefix", "openssl"]);
+        if let Some(ref output) = output {
+            let homebrew = Path::new(&output);
+            if homebrew.exists() {
+                return homebrew.to_path_buf().into();
+            }
+        }
     }
 
     try_pkg_config();
@@ -134,6 +148,9 @@ proceed without this knowledge. If OpenSSL is installe
 trouble finding it,  you can set the `OPENSSL_DIR` environment variable for the
 compilation process.
 
+Make sure you also have the development packages of openssl installed.
+For example, `libssl-dev` on Ubuntu or `openssl-devel` on Fedora.
+
 If you're in a situation where you think the directory *should* be found
 automatically, please open a bug at https://github.com/sfackler/rust-openssl
 and include information about your system as well as this message.
@@ -323,42 +340,13 @@ fn validate_headers(include_dirs: &[PathBuf]) -> Versi
 #include <openssl/opensslv.h>
 #include <openssl/opensslconf.h>
 
-#if LIBRESSL_VERSION_NUMBER >= 0x20800000
-RUST_LIBRESSL_NEW
-#elif LIBRESSL_VERSION_NUMBER >= 0x20700000
-RUST_LIBRESSL_27X
-#elif LIBRESSL_VERSION_NUMBER >= 0x20603000
-RUST_LIBRESSL_26X
-#elif LIBRESSL_VERSION_NUMBER >= 0x20602000
-RUST_LIBRESSL_262
-#elif LIBRESSL_VERSION_NUMBER >= 0x20601000
-RUST_LIBRESSL_261
-#elif LIBRESSL_VERSION_NUMBER >= 0x20600000
-RUST_LIBRESSL_260
-#elif LIBRESSL_VERSION_NUMBER >= 0x20503000
-RUST_LIBRESSL_25X
-#elif LIBRESSL_VERSION_NUMBER >= 0x20502000
-RUST_LIBRESSL_252
-#elif LIBRESSL_VERSION_NUMBER >= 0x20501000
-RUST_LIBRESSL_251
-#elif LIBRESSL_VERSION_NUMBER >= 0x20500000
-RUST_LIBRESSL_250
-#elif defined (LIBRESSL_VERSION_NUMBER) && LIBRESSL_VERSION_NUMBER < 0x20500000
-RUST_LIBRESSL_OLD
-#elif OPENSSL_VERSION_NUMBER >= 0x10102000
-RUST_OPENSSL_NEW
-#elif OPENSSL_VERSION_NUMBER >= 0x10101000
-RUST_OPENSSL_111
-#elif OPENSSL_VERSION_NUMBER >= 0x10100060
-RUST_OPENSSL_110F
-#elif OPENSSL_VERSION_NUMBER >= 0x10100000
-RUST_OPENSSL_110
-#elif OPENSSL_VERSION_NUMBER >= 0x10002000
-RUST_OPENSSL_102
-#elif OPENSSL_VERSION_NUMBER >= 0x10001000
-RUST_OPENSSL_101
-#else
-RUST_OPENSSL_OLD
+#define VERSION2(n, v) RUST_VERSION_ ## n ## _ ## v
+#define VERSION(n, v) VERSION2(n, v)
+
+VERSION(OPENSSL, OPENSSL_VERSION_NUMBER)
+
+#ifdef LIBRESSL_VERSION_NUMBER
+VERSION(LIBRESSL, LIBRESSL_VERSION_NUMBER)
 #endif
 "
     ).unwrap();
@@ -368,7 +356,7 @@ RUST_OPENSSL_OLD
             file,
             "\
 #ifdef {define}
-RUST_{define}_RUST
+RUST_CONF_{define}
 #endif
 ",
             define = define
@@ -383,11 +371,14 @@ RUST_{define}_RUST
         gcc.include(include_dir);
     }
     // https://github.com/alexcrichton/gcc-rs/issues/133
-    let expanded = match panic::catch_unwind(AssertUnwindSafe(|| gcc.file(&path).expand())) {
+    let expanded = match gcc.file(&path).try_expand() {
         Ok(expanded) => expanded,
-        Err(_) => {
+        Err(e) => {
             panic!(
                 "
+Header expansion error:
+{:?}
+
 Failed to find OpenSSL development headers.
 
 You can try fixing this setting the `OPENSSL_DIR` environment variable
@@ -404,120 +395,133 @@ specific to your distribution:
 See rust-openssl README for more information:
 
     https://github.com/sfackler/rust-openssl#linux
-"
+",
+                e
             );
         }
     };
     let expanded = String::from_utf8(expanded).unwrap();
 
     let mut enabled = vec![];
-    for &define in DEFINES {
-        if expanded.contains(&format!("RUST_{}_RUST", define)) {
-            println!("cargo:rustc-cfg=osslconf=\"{}\"", define);
-            enabled.push(define);
+    let mut openssl_version = None;
+    let mut libressl_version = None;
+    for line in expanded.lines() {
+        let line = line.trim();
+
+        let openssl_prefix = "RUST_VERSION_OPENSSL_";
+        let libressl_prefix = "RUST_VERSION_LIBRESSL_";
+        let conf_prefix = "RUST_CONF_";
+        if line.starts_with(openssl_prefix) {
+            let version = &line[openssl_prefix.len()..];
+            openssl_version = Some(parse_version(version));
+        } else if line.starts_with(libressl_prefix) {
+            let version = &line[libressl_prefix.len()..];
+            libressl_version = Some(parse_version(version));
+        } else if line.starts_with(conf_prefix) {
+            enabled.push(&line[conf_prefix.len()..]);
         }
     }
+
+    for enabled in &enabled {
+        println!("cargo:rustc-cfg=osslconf=\"{}\"", enabled);
+    }
     println!("cargo:conf={}", enabled.join(","));
 
-    if expanded.contains("RUST_LIBRESSL_250") {
+    if let Some(libressl_version) = libressl_version {
+        println!("cargo:libressl_version_number={:x}", libressl_version);
+
+        let minor = (libressl_version >> 20) as u8;
+        let fix = (libressl_version >> 12) as u8;
+        let (minor, fix) = match (minor, fix) {
+            (5, 0) => ('5', '0'),
+            (5, 1) => ('5', '1'),
+            (5, 2) => ('5', '2'),
+            (5, _) => ('5', 'x'),
+            (6, 0) => ('6', '0'),
+            (6, 1) => ('6', '1'),
+            (6, 2) => ('6', '2'),
+            (6, _) => ('6', 'x'),
+            (7, _) => ('7', 'x'),
+            (8, _) => ('8', 'x'),
+            _ => version_error(),
+        };
+
         println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl250");
+        println!("cargo:rustc-cfg=libressl2{}{}", minor, fix);
         println!("cargo:libressl=true");
-        println!("cargo:libressl_version=250");
+        println!("cargo:libressl_version=2{}{}", minor, fix);
         println!("cargo:version=101");
         Version::Libressl
-    } else if expanded.contains("RUST_LIBRESSL_251") {
-        println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl251");
-        println!("cargo:libressl=true");
-        println!("cargo:libressl_version=251");
-        println!("cargo:version=101");
-        Version::Libressl
-    } else if expanded.contains("RUST_LIBRESSL_252") {
-        println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl252");
-        println!("cargo:libressl=true");
-        println!("cargo:libressl_version=252");
-        println!("cargo:version=101");
-        Version::Libressl
-    } else if expanded.contains("RUST_LIBRESSL_25X") {
-        println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl25x");
-        println!("cargo:libressl=true");
-        println!("cargo:libressl_version=25x");
-        println!("cargo:version=101");
-        Version::Libressl
-    } else if expanded.contains("RUST_LIBRESSL_260") {
-        println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl260");
-        println!("cargo:libressl=true");
-        println!("cargo:libressl_version=260");
-        println!("cargo:version=101");
-        Version::Libressl
-    } else if expanded.contains("RUST_LIBRESSL_261") {
-        println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl261");
-        println!("cargo:libressl=true");
-        println!("cargo:libressl_version=261");
-        println!("cargo:version=101");
-        Version::Libressl
-    } else if expanded.contains("RUST_LIBRESSL_262") {
-        println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl262");
-        println!("cargo:libressl=true");
-        println!("cargo:libressl_version=262");
-        println!("cargo:version=101");
-        Version::Libressl
-    } else if expanded.contains("RUST_LIBRESSL_26X") {
-        println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl26x");
-        println!("cargo:libressl=true");
-        println!("cargo:libressl_version=26x");
-        println!("cargo:version=101");
-        Version::Libressl
-    } else if expanded.contains("RUST_LIBRESSL_27X") {
-        println!("cargo:rustc-cfg=libressl");
-        println!("cargo:rustc-cfg=libressl27");
-        println!("cargo:libressl=true");
-        println!("cargo:libressl_version=27x");
-        println!("cargo:version=101");
-        Version::Libressl
-    } else if expanded.contains("RUST_OPENSSL_111") {
-        println!("cargo:rustc-cfg=ossl111");
-        println!("cargo:rustc-cfg=ossl110");
-        println!("cargo:version=111");
-        Version::Openssl110
-    } else if expanded.contains("RUST_OPENSSL_110F") {
-        println!("cargo:rustc-cfg=ossl110");
-        println!("cargo:rustc-cfg=ossl110f");
-        println!("cargo:version=110");
-        println!("cargo:patch=f");
-        Version::Openssl110
-    } else if expanded.contains("RUST_OPENSSL_110") {
-        println!("cargo:rustc-cfg=ossl110");
-        println!("cargo:version=110");
-        Version::Openssl110
-    } else if expanded.contains("RUST_OPENSSL_102") {
-        println!("cargo:rustc-cfg=ossl102");
-        println!("cargo:version=102");
-        Version::Openssl102
-    } else if expanded.contains("RUST_OPENSSL_101") {
-        println!("cargo:rustc-cfg=ossl101");
-        println!("cargo:version=101");
-        Version::Openssl101
     } else {
-        panic!(
-            "
+        let openssl_version = openssl_version.unwrap();
+        println!("cargo:version_number={:x}", openssl_version);
 
+        if openssl_version >= 0x1_00_02_08_0 {
+            println!("cargo:rustc-cfg=ossl102h");
+        }
+
+        if openssl_version >= 0x1_01_00_07_0 {
+            println!("cargo:rustc-cfg=ossl110g");
+        }
+
+        if openssl_version >= 0x1_01_02_00_0 {
+            version_error()
+        } else if openssl_version >= 0x1_01_01_00_0 {
+            println!("cargo:rustc-cfg=ossl111");
+            println!("cargo:rustc-cfg=ossl110");
+            println!("cargo:version=111");
+            Version::Openssl11x
+        } else if openssl_version >= 0x1_01_00_06_0 {
+            println!("cargo:rustc-cfg=ossl110");
+            println!("cargo:rustc-cfg=ossl110f");
+            println!("cargo:version=110");
+            println!("cargo:patch=f");
+            Version::Openssl11x
+        } else if openssl_version >= 0x1_01_00_00_0 {
+            println!("cargo:rustc-cfg=ossl110");
+            println!("cargo:version=110");
+            Version::Openssl11x
+        } else if openssl_version >= 0x1_00_02_00_0 {
+            println!("cargo:rustc-cfg=ossl102");
+            println!("cargo:version=102");
+            Version::Openssl10x
+        } else if openssl_version >= 0x1_00_01_00_0 {
+            println!("cargo:rustc-cfg=ossl101");
+            println!("cargo:version=101");
+            Version::Openssl10x
+        } else {
+            version_error()
+        }
+    }
+}
+
+fn version_error() -> ! {
+    panic!(
+        "
+
 This crate is only compatible with OpenSSL 1.0.1 through 1.1.1, or LibreSSL 2.5
-through 2.7, but a different version of OpenSSL was found. The build is now aborting
+through 2.8, but a different version of OpenSSL was found. The build is now aborting
 due to this version mismatch.
 
 "
-        );
-    }
+    );
 }
 
+// parses a string that looks like "0x100020cfL"
+fn parse_version(version: &str) -> u64 {
+    // cut off the 0x prefix
+    assert!(version.starts_with("0x"));
+    let version = &version[2..];
+
+    // and the type specifier suffix
+    let version = version.trim_right_matches(|c: char| match c {
+        '0'...'9' | 'a'...'f' | 'A'...'F' => false,
+        _ => true,
+    });
+
+    u64::from_str_radix(version, 16).unwrap()
+}
+
 /// Given a libdir for OpenSSL (where artifacts are located) as well as the name
 /// of the libraries we're linking to, figure out whether we should link them
 /// statically or dynamically.
@@ -563,3 +567,19 @@ fn determine_mode(libdir: &Path, libs: &[&str]) -> &'s
     // practices with security libs", let's link dynamically.
     "dylib"
 }
+
+
+
+fn execute_command_and_get_output(cmd: &str, args: &[&str]) -> Option<String> {
+    let out = Command::new(cmd).args(args).output();
+    if let Ok(ref r1) = out {
+        if r1.status.success() {
+            let r2 = String::from_utf8(r1.stdout.clone());
+            if let Ok(r3) = r2 {
+                return Some(r3.trim().to_string());
+            } 
+        }
+    }
+    return None;
+}
+
