--- src/bbcp_NetAddrInfo.C.orig	2018-06-18 04:30:09 UTC
+++ src/bbcp_NetAddrInfo.C
@@ -67,7 +67,7 @@
 #ifndef s6_addr32
 #if   defined(SUN)
 #define s6_addr32 _S6_un._S6_u32
-#elif defined(MACOS)
+#elif defined(MACOS) || defined(FREEBSD)
 #define s6_addr32 __u6_addr.__u6_addr32
 #endif
 #endif
