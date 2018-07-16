--- src/Headers/constants.h.orig	2007-07-13 22:42:49 UTC
+++ src/Headers/constants.h
@@ -101,7 +101,7 @@
 # define DEFAULT_SYSTEMDIR "/os2/"
 # else                            
 /*@constant observer char *DEFAULT_SYSTEMDIR; @*/
-# define DEFAULT_SYSTEMDIR "/usr/"
+# define DEFAULT_SYSTEMDIR "/usr/include/:/usr/lib/:%%PREFIX%%/include/:%%PREFIX%%/lib/"
 # endif
 
 /*@constant char DEFAULT_COMMENTCHAR; @*/
