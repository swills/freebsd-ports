--- lib-src/libnyquist/nyquist/cmt/cext.h.orig	2021-03-09 02:19:38.000000000 -0800
+++ lib-src/libnyquist/nyquist/cmt/cext.h	2021-03-17 17:28:08.121777000 -0700
@@ -61,7 +61,7 @@
 #include <malloc.h>
 #endif
 
-#if NEED_ULONG
+#if NEED_ULONG || __FreeBSD__
 typedef unsigned long ulong;
 #endif
 
