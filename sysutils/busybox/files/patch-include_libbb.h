--- include/libbb.h.orig	2019-02-14 14:31:15.000000000 +0100
+++ include/libbb.h	2019-07-01 09:19:18.830617000 +0200
@@ -53,6 +53,9 @@
 #include <termios.h>
 #include <time.h>
 #include <sys/param.h>
+#ifndef HAVE_XTABS
+# define XTABS TAB3
+#endif
 #include <pwd.h>
 #include <grp.h>
 #if ENABLE_FEATURE_SHADOWPASSWDS
@@ -160,9 +163,6 @@
 #ifndef HAVE_FDATASYNC
 # define fdatasync fsync
 #endif
-#ifndef HAVE_XTABS
-# define XTABS TAB3
-#endif
 /*
  * Use '%m' to append error string on platforms that support it,
  * '%s' and strerror() on those that don't.
