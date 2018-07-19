--- python/types.c.orig	2018-01-04 07:57:37 UTC
+++ python/types.c
@@ -31,8 +31,10 @@ libxml_PyFileGet(PyObject *f) {
     const char *mode;
 
     fd = PyObject_AsFileDescriptor(f);
+#if PY_MAJOR_VERSION < 3
     if (!_PyVerify_fd(fd))
         return(NULL);
+#endif 
     /*
      * Get the flags on the fd to understand how it was opened
      */
