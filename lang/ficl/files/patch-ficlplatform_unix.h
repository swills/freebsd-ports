--- ficlplatform/unix.h.orig	2020-08-27 12:17:03 UTC
+++ ficlplatform/unix.h
@@ -13,7 +13,7 @@
 #else
 #define FICL_PLATFORM_ALIGNMENT       (4)
 #endif
-#define FICL_PLATFORM_INLINE          inline
+#define FICL_PLATFORM_INLINE          extern inline
 
 #define FICL_PLATFORM_HAS_FTRUNCATE   (1)
 #if defined(__amd64__)
