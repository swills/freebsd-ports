--- cc/cc/cc.c.orig	2014-12-06 09:52:55 UTC
+++ cc/cc/cc.c
@@ -206,7 +206,7 @@ char *cppmdadd[] = CPPMDADD;
 #define PCCLIBDIR	NULL
 #endif
 #ifndef DEFLIBDIRS	/* default library search paths */
-#ifdef MULTIARCH_PATH
+#ifndef MULTIARCH_PATH
 #define DEFLIBDIRS	{ "/usr/lib/", 0 }
 #else
 #define DEFLIBDIRS	{ "/usr/lib/", "/usr/lib/" MULTIARCH_PATH "/", 0 }
@@ -475,7 +475,7 @@
 #endif
 #endif
 
-	while (--lac) {
+	while (--lac > 0) {
 		++lav;
 		argp = *lav;
 
@@ -1464,7 +1464,7 @@
 		if (lav[0][l] != 0)
 			return &lav[0][l];
 	}
-	if (lac == 0)
+	if (lac < 2)
 		errorx(8, "missing argument to '%s'", o);
 	lav++;
 	lac--;
