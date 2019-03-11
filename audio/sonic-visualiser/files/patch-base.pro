--- base.pro.orig	2019-02-24 20:51:22.585365000 +0100
+++ base.pro	2019-02-24 20:52:25.795850000 +0100
@@ -25,9 +25,7 @@
 }
 
 include(bq-files.pri)
-include(vamp-plugin-sdk-files.pri)
 include(svcore/files.pri)
-include(capnp-regen.pri)
 
 DATAQUAY_SOURCES=$$fromfile(dataquay/lib.pro, SOURCES)
 DATAQUAY_HEADERS=$$fromfile(dataquay/lib.pro, HEADERS)
