--- src/CXX/Python3/cxx_extensions.cxx.orig	2019-10-22 16:53:35 UTC
+++ src/CXX/Python3/cxx_extensions.cxx
@@ -381,7 +381,11 @@ PythonType::PythonType( size_t basic_size, int itemsiz
 
     // Methods to implement standard operations
     table->tp_dealloc = (destructor)standard_dealloc;
+#if PY_VERSION_HEX < 0x03080000
     table->tp_print = 0;
+#else
+    table->tp_vectorcall_offset = 0;
+#endif
     table->tp_getattr = 0;
     table->tp_setattr = 0;
     table->tp_repr = 0;
@@ -524,7 +528,9 @@ PythonType &PythonType::supportClass()
 #ifdef PYCXX_PYTHON_2TO3
 PythonType &PythonType::supportPrint()
 {
+#if PY_VERSION_HEX < 0x03080000
     table->tp_print = print_handler;
+#endif
     return *this;
 }
 #endif
