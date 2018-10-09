--- domainkeys.c.orig	2018-10-09 22:18:58 UTC
+++ domainkeys.c
@@ -120,7 +120,7 @@ typedef struct
 {
 /* STARTPRIV */
   int dkmarker;     /* in case somebody casts in */
-  EVP_MD_CTX mdctx;   /* the hash */
+  EVP_MD_CTX *mdctx;   /* the hash */
   int signing;      /* our current signing/verifying state */
   int in_headers;   /* true if we're still processing headers */
   char *header;     /* points to a malloc'ed block for header. */
