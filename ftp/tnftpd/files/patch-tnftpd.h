FreeBSD does not have LOGIN_NAME_MAX, but it has MAXLOGNAME instead,
so use it as much as possible. Rewrite utmpx support.

--- tnftpd.h.orig	2020-08-20 14:21:18.580517000 +0200
+++ tnftpd.h	2020-08-20 14:30:38.005942000 +0200
@@ -119,6 +119,8 @@
 #endif
 #if defined(HAVE_UTMP_H)
 # include <utmp.h>
+#else
+# include <utmpx.h>
 #endif
 
 #if defined(HAVE_POLL)
@@ -565,7 +567,11 @@
 #define TM_YEAR_BASE	1900
 
 #if !defined(LOGIN_NAME_MAX)
+#if defined(MAXLOGNAME)
+# define LOGIN_NAME_MAX MAXLOGNAME
+#else
 # define LOGIN_NAME_MAX (9)
+#endif
 #endif
 
 #if !defined(_POSIX_LOGIN_NAME_MAX)
