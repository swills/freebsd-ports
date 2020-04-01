--- vendor/openssl-sys/src/evp.rs.orig	2019-11-30 10:09:17 UTC
+++ vendor/openssl-sys/src/evp.rs
@@ -10,6 +10,10 @@ pub const EVP_PKEY_RSA: c_int = NID_rsaEncryption;
 pub const EVP_PKEY_DSA: c_int = NID_dsa;
 pub const EVP_PKEY_DH: c_int = NID_dhKeyAgreement;
 pub const EVP_PKEY_EC: c_int = NID_X9_62_id_ecPublicKey;
+#[cfg(ossl111)]
+pub const EVP_PKEY_ED25519: c_int = NID_ED25519;
+#[cfg(ossl111)]
+pub const EVP_PKEY_ED448: c_int = NID_ED448;
 pub const EVP_PKEY_HMAC: c_int = NID_hmac;
 pub const EVP_PKEY_CMAC: c_int = NID_cmac;
 
@@ -154,6 +158,27 @@ cfg_if! {
     }
 }
 cfg_if! {
+    if #[cfg(ossl111)] {
+        extern "C" {
+            pub fn EVP_DigestSign(
+                ctx: *mut EVP_MD_CTX,
+                sigret: *mut c_uchar,
+                siglen: *mut size_t,
+                tbs: *const c_uchar,
+                tbslen: size_t
+            ) -> c_int;
+
+            pub fn EVP_DigestVerify(
+                ctx: *mut EVP_MD_CTX,
+                sigret: *const c_uchar,
+                siglen: size_t,
+                tbs: *const c_uchar,
+                tbslen: size_t
+            ) -> c_int;
+        }
+    }
+}
+cfg_if! {
     if #[cfg(any(ossl102, libressl280))] {
         extern "C" {
             pub fn EVP_DigestVerifyFinal(
@@ -279,6 +304,8 @@ extern "C" {
 
     pub fn EVP_PKEY_new() -> *mut EVP_PKEY;
     pub fn EVP_PKEY_free(k: *mut EVP_PKEY);
+    #[cfg(any(ossl110, libressl270))]
+    pub fn EVP_PKEY_up_ref(pkey: *mut EVP_PKEY) -> c_int;
 
     pub fn d2i_AutoPrivateKey(
         a: *mut *mut EVP_PKEY,
