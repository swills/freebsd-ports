In file included from ../src/x.c:17:
../src/backend/gl/glx.h:10:10: fatal error: 'GL/glx.h' file not found
#include <GL/glx.h>
         ^~~~~~~~~~

--- src/x.c.orig	2019-09-21 00:08:00 UTC
+++ src/x.c
@@ -14,7 +14,9 @@
 #include <xcb/xfixes.h>
 
 #include "atom.h"
+#ifdef CONFIG_OPENGL
 #include "backend/gl/glx.h"
+#endif
 #include "common.h"
 #include "compiler.h"
 #include "kernel.h"
