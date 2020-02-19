--- contrib/mod_tls.c.orig     2020-02-04 10:18:23.154478000 +0000
+++ contrib/mod_tls.c  2020-02-04 10:17:08.374249000 +0000
@@ -1565,7 +1565,8 @@
       version_str = "TLSv1.2";
       break;

-# if OPENSSL_VERSION_NUMBER >= 0x10101000L
+# if OPENSSL_VERSION_NUMBER >= 0x10101000L && \
+     defined(TLS1_3_VERSION)
     case TLS1_3_VERSION:
       version_str = "TLSv1.3";
       break;
@@ -1592,7 +1593,8 @@
 #if OPENSSL_VERSION_NUMBER >= 0x10001000L
       version == TLS1_1_VERSION ||
       version == TLS1_2_VERSION ||
-# if OPENSSL_VERSION_NUMBER >= 0x10101000L
+# if OPENSSL_VERSION_NUMBER >= 0x10101000L && \
+     defined(TLS1_3_VERSION)
       version == TLS1_3_VERSION ||
 # endif
 #endif
@@ -7932,8 +7934,7 @@
     file_sig = file_cert->signature;
 #endif /* OpenSSL-1.1.x and later */

-#if OPENSSL_VERSION_NUMBER >= 0x10100000L && \
-    !defined(HAVE_LIBRESSL)
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
     if (!ASN1_STRING_cmp(client_sig, file_sig)) {
 #else
     if (!M_ASN1_BIT_STRING_cmp(client_sig, file_sig)) {
