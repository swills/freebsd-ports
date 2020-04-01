--- vendor/openssl-sys/src/crypto.rs.orig	2019-11-30 10:09:17 UTC
+++ vendor/openssl-sys/src/crypto.rs
@@ -5,6 +5,8 @@ use *;
 #[cfg(not(ossl110))]
 pub const CRYPTO_LOCK_X509: c_int = 3;
 #[cfg(not(ossl110))]
+pub const CRYPTO_LOCK_EVP_PKEY: c_int = 10;
+#[cfg(not(ossl110))]
 pub const CRYPTO_LOCK_SSL_CTX: c_int = 12;
 #[cfg(not(ossl110))]
 pub const CRYPTO_LOCK_SSL_SESSION: c_int = 14;
