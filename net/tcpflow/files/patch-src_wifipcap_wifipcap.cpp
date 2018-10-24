--- src/wifipcap/wifipcap.cpp.orig	2018-10-08 19:23:06 UTC
+++ src/wifipcap/wifipcap.cpp
@@ -22,6 +22,7 @@
 #include <errno.h>
 
 #ifdef HAVE_NET_ETHERNET_H
+#include <sys/param.h>
 #include <net/ethernet.h>
 #endif
 
