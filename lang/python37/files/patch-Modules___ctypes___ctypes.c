bpo-16575: Disabled checks for union types being passed by value. 

https://github.com/python/cpython/pull/17960

databases/grass7 wxPython gui needs this patch
Context here: https://trac.osgeo.org/grass/ticket/4015

--- Modules/_ctypes/_ctypes.c.orig	2020-03-01 17:40:43 UTC
+++ Modules/_ctypes/_ctypes.c
@@ -2277,6 +2277,23 @@ converters_from_argtypes(PyObject *ob)
     for (i = 0; i < nArgs; ++i) {
         PyObject *tp = PyTuple_GET_ITEM(ob, i);
         PyObject *cnv;
+/*
+ *      The following checks, relating to bpo-16575 and bpo-16576, have been
+ *      disabled. The reason is that, although there is a definite problem with
+ *      how libffi handles unions (https://github.com/libffi/libffi/issues/33),
+ *      there are numerous libraries which pass structures containing unions
+ *      by values - especially on Windows but examples also exist on Linux
+ *      (https://bugs.python.org/msg359834).
+ *
+ *      It may not be possible to get proper support for unions and bitfields
+ *      until support is forthcoming in libffi, but for now, adding the checks
+ *      has caused problems in otherwise-working software, which suggests it
+ *      is better to disable the checks.
+ *
+ *      Although specific examples reported relate specifically to unions and
+ *      not bitfields, the bitfields check is also being disabled as a
+ *      precaution.
+
         StgDictObject *stgdict = PyType_stgdict(tp);
 
         if (stgdict != NULL) {
@@ -2304,6 +2321,7 @@ converters_from_argtypes(PyObject *ob)
                 return NULL;
             }
         }
+*/
         cnv = PyObject_GetAttrString(tp, "from_param");
         if (!cnv)
             goto argtypes_error_1;
