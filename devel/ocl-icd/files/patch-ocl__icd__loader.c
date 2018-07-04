--- ocl_icd_loader.c.orig	2017-01-19 14:55:12.355263750 +0100
+++ ocl_icd_loader.c	2017-02-02 21:36:14.579958000 +0100
@@ -53,7 +53,7 @@
 
 typedef __typeof__(clGetPlatformInfo) *clGetPlatformInfo_fn;
 
-inline void dump_vendor_icd(const char* info, const struct vendor_icd *v) {
+static inline void dump_vendor_icd(const char* info, const struct vendor_icd *v) {
   debug(D_DUMP, "%s %p={ num=%i, handle=%p, f=%p}\n", info,
 	v, v->num_platforms, v->dl_handle, v->ext_fn_ptr);
 }
