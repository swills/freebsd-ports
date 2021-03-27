--- lib-src/libnyquist/nyquist/xlisp/xlfio.c.orig	2021-03-09 02:19:38.000000000 -0800
+++ lib-src/libnyquist/nyquist/xlisp/xlfio.c	2021-03-17 17:09:35.677331000 -0700
@@ -19,8 +19,7 @@
 /* do some sanity checking: */
 #ifndef XL_BIG_ENDIAN
 #ifndef XL_LITTLE_ENDIAN
-#error configuration error -- either XL_BIG_ or XL_LITTLE_ENDIAN must be defined
-in xlisp.h
+#error configuration error -- either XL_BIG_ or XL_LITTLE_ENDIAN must be defined in xlisp.h
 #endif
 #endif
 #ifdef XL_BIG_ENDIAN
