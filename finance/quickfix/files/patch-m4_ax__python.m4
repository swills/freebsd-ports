--- m4/ax_python.m4.orig	2020-12-08 00:07:54 UTC
+++ m4/ax_python.m4
@@ -54,10 +54,10 @@ fi
 
 if test $has_python3 = true
 then
-    PYTHON3_INCLUDE_PATH=[`python3 -c 'from distutils import sysconfig; print( sysconfig.get_python_inc(1) )'`]
+    PYTHON3_INCLUDE_PATH=[`python3.7 -c 'from distutils import sysconfig; print( sysconfig.get_python_inc(1) )'`]
     PYTHON3_CFLAGS="-I${PYTHON3_INCLUDE_PATH}"
     AC_SUBST(PYTHON3_CFLAGS)
-    PYTHON3_SITE_PACKAGES=[`python3 -c 'from distutils import sysconfig; print( sysconfig.get_python_lib(1) )'`]
+    PYTHON3_SITE_PACKAGES=[`python3.7 -c 'from distutils import sysconfig; print( sysconfig.get_python_lib(1) )'`]
     AC_SUBST(PYTHON3_SITE_PACKAGES)
     AC_DEFINE(HAVE_PYTHON3, 1, Define if you have python3)
 fi
