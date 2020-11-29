--- src/Base/swigpyrun_1.3.33.h.orig	2020-11-14 21:10:37 UTC
+++ src/Base/swigpyrun_1.3.33.h
@@ -1620,7 +1620,11 @@ _PySwigObject_type(void) {
 	sizeof(PySwigObject),		    /* tp_basicsize */
 	0,			            /* tp_itemsize */
 	(destructor)PySwigObject_dealloc,   /* tp_dealloc */
+#if PY_VERSION_HEX < 0x03080000
 	(printfunc)PySwigObject_print,	    /* tp_print */
+#else
+	0, /*tp_vectorcall_offset*/
+#endif
 #if PY_VERSION_HEX < 0x02020000
 	(getattrfunc)PySwigObject_getattr,  /* tp_getattr */ 
 #else
@@ -1790,7 +1794,11 @@ _PySwigPacked_type(void) {
 	sizeof(PySwigPacked),		    /* tp_basicsize */	
 	0,				    /* tp_itemsize */	
 	(destructor)PySwigPacked_dealloc,   /* tp_dealloc */	
+#if PY_VERSION_HEX < 0x03080000
 	(printfunc)PySwigPacked_print,	    /* tp_print */   	
+#else
+	0, /*tp_vectorcall_offset*/
+#endif
 	(getattrfunc)0,			    /* tp_getattr */ 	
 	(setattrfunc)0,			    /* tp_setattr */ 	
 	(cmpfunc)PySwigPacked_compare,	    /* tp_compare */ 	
