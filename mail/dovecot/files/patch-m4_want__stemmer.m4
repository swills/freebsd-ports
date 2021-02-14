--- m4/want_stemmer.m4.orig	2021-01-30 09:18:08 UTC
+++ m4/want_stemmer.m4
@@ -1,6 +1,6 @@
 AC_DEFUN([DOVECOT_WANT_STEMMER], [
   if test $want_stemmer != no; then
-    AC_CHECK_LIB(stemmer, sb_stemmer_new, [
+    AC_CHECK_LIB(clucene-contribs-lib, sb_stemmer_new, [
       have_fts_stemmer=yes
       AC_DEFINE(HAVE_FTS_STEMMER,, [Define if you want stemming support for FTS])
     ], [
