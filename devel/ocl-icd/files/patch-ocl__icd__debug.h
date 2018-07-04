--- ocl_icd_debug.h.orig	2016-04-24 14:11:57.281333306 +0200
+++ ocl_icd_debug.h	2017-02-02 21:31:54.312526000 +0100
@@ -61,9 +61,9 @@
 	return ret; \
    } while(0)
 #  define RETURN_STR(val) do { \
-	char* _ret=(char*)(val);		\
-	debug(D_TRACE, "return: %s", _ret);	\
-	return _ret; \
+	char* _return_str=(char*)(val);		\
+	debug(D_TRACE, "return: %s", _return_str);	\
+	return _return_str; \
    } while(0)
 #  ifdef DEBUG_OCL_ICD_PROVIDE_DUMP_FIELD
 #    pragma GCC diagnostic push
