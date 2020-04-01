--- vendor/openssl-sys/src/lib.rs.orig	2019-11-30 10:09:17 UTC
+++ vendor/openssl-sys/src/lib.rs
@@ -88,10 +88,10 @@ pub type PasswordCallback = unsafe extern "C" fn(
 #[cfg(ossl110)]
 pub fn init() {
     use std::ptr;
-    use std::sync::{Once, ONCE_INIT};
+    use std::sync::Once;
 
     // explicitly initialize to work around https://github.com/openssl/openssl/issues/3505
-    static INIT: Once = ONCE_INIT;
+    static INIT: Once = Once::new();
 
     INIT.call_once(|| unsafe {
         OPENSSL_init_ssl(OPENSSL_INIT_LOAD_SSL_STRINGS, ptr::null_mut());
