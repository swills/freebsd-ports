--- src/lcllib.c.orig	2007-07-13 22:42:49 UTC
+++ src/lcllib.c
@@ -51,13 +51,7 @@
 extern /*:open:*/ /*@dependent@*/ FILE *yyin;
 /*@=incondefs@*/ /*@=redecl@*/
 
-/*@constant int NUMLIBS; @*/
-# define NUMLIBS 25
-
-/*@constant int NUMPOSIXLIBS; @*/
-# define NUMPOSIXLIBS 18
-
-static ob_mstring posixlibs[NUMPOSIXLIBS] = 
+static ob_mstring posixlibs[] = 
 {
   "dirent",
   "fcntl",
@@ -79,7 +73,10 @@ static ob_mstring posixlibs[NUMPOSIXLIBS
   "utime"
 } ;
 
-static ob_mstring stdlibs[NUMLIBS] =
+/*@constant int NUMPOSIXLIBS; @*/
+# define NUMPOSIXLIBS (sizeof(posixlibs) / sizeof(posixlibs[0]))
+
+static ob_mstring stdlibs[] =
 {
   "assert", 
   "complex"
@@ -87,7 +84,10 @@ static ob_mstring stdlibs[NUMLIBS] =
   "errno",
   "fenv",
   "float",
+#ifndef __FreeBSD__ 
+/* inttypes.h needs to be parsed on FreeBSD so some defines are known */
   "inttypes",
+#endif
   "iso646",
   "limits",
   "locale",
@@ -108,6 +108,9 @@ static ob_mstring stdlibs[NUMLIBS] =
   "wctype"
 } ;
 
+/*@constant int NUMLIBS; @*/
+# define NUMLIBS (sizeof(stdlibs) / sizeof(stdlibs[0]))
+
 static bool loadLCDFile (FILE * p_f, cstring p_name);
 
 bool
