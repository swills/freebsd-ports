--- vacall/vacall-internal.h.orig	2018-09-28 14:50:40 UTC
+++ vacall/vacall-internal.h
@@ -138,7 +138,6 @@ typedef struct vacall_alist
 #endif
 #if defined(__sparc64__)
   int            anum;
-  float          farg[16];
   double         darg[16];
 #endif
 #if defined(__hppa64__)
