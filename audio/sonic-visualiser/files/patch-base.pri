--- base.pri.orig	2019-01-08 14:32:16.000000000 +0100
+++ base.pri	2019-02-24 20:22:20.573083000 +0100
@@ -16,10 +16,7 @@
 	svcore/data \
 	svcore/plugin/api/alsa \
 	svgui \
-	svapp \
-	vamp-plugin-sdk \
-        rubberband \
-        rubberband/src
+	svapp
 
 DEPENDPATH += $$SV_INCLUDEPATH
 INCLUDEPATH += $$SV_INCLUDEPATH
@@ -34,6 +31,7 @@
 DEFINES += USE_SORD
 
 # Defines for Rubber Band
+freebsd*:   DEFINES += USE_PTHREADS
 linux*:   DEFINES += USE_PTHREADS
 macx*:    DEFINES += USE_PTHREADS
 
