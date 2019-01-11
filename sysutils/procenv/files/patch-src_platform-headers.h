--- src/platform-headers.h.orig	2018-11-07 02:39:39 UTC
+++ src/platform-headers.h
@@ -97,10 +97,6 @@ typedef struct statfs procenv_mnt_type;
 #include <selinux/selinux.h>
 #endif
 
-#if defined (HAVE_SYS_CAPABILITY_H)
-#include <sys/capability.h>
-#endif
-
 #if defined (__GLIBC__)
 #include <sys/sysmacros.h>
 #endif
@@ -262,10 +258,6 @@ typedef struct statfs procenv_mnt_type;
 #include <net/if.h>
 #include <link.h>
 
-#if defined (HAVE_SYS_CAPABILITY_H)
-#include <sys/capability.h>
-#endif
-
 #define PROCENV_CPU_TYPE     int
 #define PROCENV_CPU_SET_TYPE cpu_set_t
 
