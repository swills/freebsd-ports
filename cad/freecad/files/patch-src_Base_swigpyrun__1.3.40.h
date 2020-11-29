--- src/Base/swigpyrun_1.3.40.h.orig	2020-11-14 21:10:37 UTC
+++ src/Base/swigpyrun_1.3.40.h
@@ -1766,7 +1766,11 @@ _PySwigObject_type(void) {
 	sizeof(SwigPyObject),		    /* tp_basicsize */
 	0,			            /* tp_itemsize */
 	(destructor)SwigPyObject_dealloc,   /* tp_dealloc */
-	(printfunc)SwigPyObject_print,	    /* tp_print */
+#if PY_VERSION_HEX < 0x03080000
+ 	(printfunc)SwigPyObject_print,	    /* tp_print */
+#else
+	0, /*tp_vectorcall_offset*/
+#endif
 #if PY_VERSION_HEX < 0x02020000
 	(getattrfunc)SwigPyObject_getattr,  /* tp_getattr */ 
 #else
@@ -1948,7 +1952,11 @@ _PySwigPacked_type(void) {
 	sizeof(SwigPyPacked),		    /* tp_basicsize */	
 	0,				    /* tp_itemsize */	
 	(destructor)SwigPyPacked_dealloc,   /* tp_dealloc */	
-	(printfunc)SwigPyPacked_print,	    /* tp_print */   	
+#if PY_VERSION_HEX < 0x03080000
+	(printfunc)SwigPyPacked_print,	    /* tp_print */
+#else
+	0, /*tp_vectorcall_offset*/
+#endif
 	(getattrfunc)0,			    /* tp_getattr */ 	
 	(setattrfunc)0,			    /* tp_setattr */ 	
 #if PY_VERSION_HEX>=0x03000000
