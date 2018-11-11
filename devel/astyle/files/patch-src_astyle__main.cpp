--- /tmp/usr/local/poudriere/ports/default/devel/astyle/work/astyle/src/astyle_main.cpp.orig	2018-10-27 02:16:01.893346000 +0200
+++ /tmp/usr/local/poudriere/ports/default/devel/astyle/work/astyle/src/astyle_main.cpp	2018-10-27 02:19:36.333754000 +0200
@@ -46,6 +46,10 @@
 #ifdef _WIN32
 	#undef UNICODE		// use ASCII windows functions
 	#include <windows.h>
+#elif defined(__FreeBSD__)
+	#include <dirent.h>
+	#include <sys/syslimits.h>
+	#include <unistd.h>
 #else
 	#include <dirent.h>
 	#include <unistd.h>
