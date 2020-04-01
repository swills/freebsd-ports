--- vendor/openssl-sys/src/obj_mac.rs.orig	2019-11-30 10:09:17 UTC
+++ vendor/openssl-sys/src/obj_mac.rs
@@ -912,3 +912,7 @@ pub const NID_rc4_hmac_md5: c_int = 915;
 pub const NID_aes_128_cbc_hmac_sha1: c_int = 916;
 pub const NID_aes_192_cbc_hmac_sha1: c_int = 917;
 pub const NID_aes_256_cbc_hmac_sha1: c_int = 918;
+#[cfg(ossl111)]
+pub const NID_ED25519: c_int = 1087;
+#[cfg(ossl111)]
+pub const NID_ED448: c_int = 1088;
