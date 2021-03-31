--- Source/WebKit/UIProcess/API/glib/WebKitProtocolHandler.cpp.orig	2020-10-23 08:24:22 UTC
+++ Source/WebKit/UIProcess/API/glib/WebKitProtocolHandler.cpp
@@ -43,6 +43,7 @@
 
 #if PLATFORM(WAYLAND) && USE(WPE_RENDERER)
 #include <wpe/fdo.h>
+#include <wpe/wpe.h>
 #endif
 #endif
 
