--- Source/WebKit/UIProcess/gtk/AcceleratedBackingStoreWayland.cpp.orig	2020-09-11 08:16:51 UTC
+++ Source/WebKit/UIProcess/gtk/AcceleratedBackingStoreWayland.cpp
@@ -51,6 +51,7 @@
 
 #if USE(WPE_RENDERER)
 #include <wpe/fdo-egl.h>
+#include <wpe/wpe.h>
 #if WPE_FDO_CHECK_VERSION(1, 7, 0)
 #include <wayland-server.h>
 #include <wpe/unstable/fdo-shm.h>
