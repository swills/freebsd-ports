--- src/imapcommon.c.orig	2018-10-09 22:42:54 UTC
+++ src/imapcommon.c
@@ -295,7 +295,7 @@ extern ICD_Struct *Get_Server_conn( char *Username, 
     int rc;
     unsigned int Expiration;
 
-    EVP_MD_CTX mdctx;
+    EVP_MD_CTX *mdctx;
     int md_len;
 
     Expiration = PC_Struct.cache_expiration_time;
