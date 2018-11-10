--- src/bbcp_File.C.orig	2018-06-18 04:19:20 UTC
+++ src/bbcp_File.C
@@ -44,7 +44,7 @@
 
 #ifdef FREEBSD
 #undef ENODATA
-#define ENODATA ENOATTRR
+#define ENODATA ENOATTR
 #endif
 
 /******************************************************************************/
@@ -153,7 +153,7 @@ bbcp_Buffer *bbcp_File::getBuffer(long long offset)
 
 // Find a buffer
 //
-   if (bp = nextbuff)
+   if ((bp = nextbuff))
       while(bp && bp->boff != offset) {pp = bp; bp = bp->next;}
 
 // If we found a buffer, unchain it
