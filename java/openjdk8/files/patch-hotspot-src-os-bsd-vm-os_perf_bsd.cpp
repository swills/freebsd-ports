--- ./hotspot/src/os/bsd/vm/os_perf_bsd.cpp.ORIG	2020-07-15 23:18:48.000000000 +0200
+++ ./hotspot/src/os/bsd/vm/os_perf_bsd.cpp	2020-07-19 15:14:54.128778000 +0200
@@ -43,7 +43,13 @@
   #include <mach/task_info.h>
 #else
   #ifndef __NetBSD__
+    #ifdef __FreeBSD__
+    #define frame xxxframe
+    #endif
     #include <sys/user.h>
+    #ifdef __FreeBSD__
+    #undef frame
+    #endif
   #endif
   #include <sys/sched.h>
   #include <sys/resource.h>
