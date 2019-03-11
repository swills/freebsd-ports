--- rubberband/src/system/sysutils.h.orig	2019-02-24 19:42:14.471255000 +0100
+++ rubberband/src/system/sysutils.h	2019-02-24 19:42:27.408497000 +0100
@@ -47,7 +47,7 @@
 #include <malloc.h>
 #else
 #ifndef __MSVC__
-#include <alloca.h>
+/* #include <alloca.h> */
 #endif
 #endif
 
