--- src/Base/swigpyrun_1.3.25.h.orig	2020-11-14 21:10:37 UTC
+++ src/Base/swigpyrun_1.3.25.h
@@ -699,7 +699,11 @@ PySwigObject_type(void) {
     0,					/*tp_itemsize*/
     /* methods */
     (destructor)PySwigObject_dealloc,	/*tp_dealloc*/
+#if PY_VERSION_HEX < 0x03080000
     (printfunc)PySwigObject_print,	/*tp_print*/
+#else
+    0,          /*tp_vectorcall_offset*/
+#endif
     (getattrfunc)0,			/*tp_getattr*/
     (setattrfunc)0,			/*tp_setattr*/
     (cmpfunc)PySwigObject_compare,	/*tp_compare*/
@@ -859,7 +863,11 @@ PySwigPacked_type(void) {
     0,					/*tp_itemsize*/
     /* methods */
     (destructor)PySwigPacked_dealloc,	/*tp_dealloc*/
+#if PY_VERSION_HEX < 0x03080000
     (printfunc)PySwigPacked_print,	/*tp_print*/
+#else
+    0,          /*tp_vectorcall_offset*/
+#endif
     (getattrfunc)0,			/*tp_getattr*/
     (setattrfunc)0,			/*tp_setattr*/
     (cmpfunc)PySwigPacked_compare,	/*tp_compare*/
