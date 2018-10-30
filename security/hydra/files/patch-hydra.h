--- hydra.h.orig	2018-10-15 13:53:10 UTC
+++ hydra.h
@@ -38,10 +38,6 @@
   #endif
 #endif
 
-#ifdef LIBSSH
-  #include <libssh/libssh.h>
-#endif
-
 #ifdef HAVE_ZLIB
   #include <zlib.h>
 #endif
