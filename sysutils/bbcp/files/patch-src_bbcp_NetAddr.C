--- src/bbcp_NetAddr.C.orig	2018-06-18 04:21:20 UTC
+++ src/bbcp_NetAddr.C
@@ -49,7 +49,7 @@
 #ifndef s6_addr32
 #if   defined(SUN)
 #define s6_addr32 _S6_un._S6_u32
-#elif defined(MACOS)
+#elif defined(MACOS) || defined(FREEBSD)
 #define s6_addr32 __u6_addr.__u6_addr32
 #endif
 #endif
