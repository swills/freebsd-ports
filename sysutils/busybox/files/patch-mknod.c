--- coreutils/mknod.c	2019-07-01 13:32:04.182184000 +0200
+++ coreutils/mknod.c	2019-07-01 11:13:56.242823000 +0200
@@ -36,7 +36,8 @@
 //usage:       "$ mknod /dev/fd0 b 2 0\n"
 //usage:       "$ mknod -m 644 /tmp/pipe p\n"
 
-#include <sys/sysmacros.h>  // For makedev
+// #include <sys/sysmacros.h>  // For makedev
+#include <sys/types.h>
 
 #include "libbb.h"
 #include "libcoreutils/coreutils.h"
