--- glfw/wl_init.c.orig	2019-02-17 23:49:36 UTC
+++ glfw/wl_init.c
@@ -31,7 +31,7 @@
 #include <assert.h>
 #include <errno.h>
 #include <limits.h>
-#include <linux/input.h>
+#include <dev/evdev/input.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
