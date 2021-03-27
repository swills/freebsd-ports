--- lib-src/libnyquist/nyquist/xlisp/xlisp.h.orig	2021-03-17 17:23:49.169659000 -0700
+++ lib-src/libnyquist/nyquist/xlisp/xlisp.h	2021-03-17 17:24:27.385843000 -0700
@@ -172,6 +172,15 @@
 #endif
 #endif
 
+/* FreeBSD */
+#ifdef __FreeBSD__
+#if __BYTE_ORDER == __LITTLE_ENDIAN
+#define XL_LITTLE_ENDIAN
+#else
+#define XL_BIG_ENDIAN
+#endif
+#endif
+
 /* Apple CC (xcode, macOS, macintosh) */
 #ifdef __APPLE__
 #define NNODES 2000
