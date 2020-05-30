Index: src/mosquitto_passwd.c
===================================================================
--- src/mosquitto_passwd.c.orig	2019-11-28 17:15:13 UTC
+++ src/mosquitto_passwd.c
@@ -141,7 +141,7 @@ int output_new_password(FILE *fptr, const char *userna
 	unsigned char hash[EVP_MAX_MD_SIZE];
 	unsigned int hash_len;
 	const EVP_MD *digest;
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(HAVE_OPENSSL_OPAQUE_STRUCTS)
 	EVP_MD_CTX context;
 #else
 	EVP_MD_CTX *context;
@@ -168,7 +168,7 @@ int output_new_password(FILE *fptr, const char *userna
 		return 1;
 	}
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(HAVE_OPENSSL_OPAQUE_STRUCTS)
 	EVP_MD_CTX_init(&context);
 	EVP_DigestInit_ex(&context, digest, NULL);
 	EVP_DigestUpdate(&context, password, strlen(password));
