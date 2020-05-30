Index: config.mk
===================================================================
--- config.mk.orig	2019-11-28 17:15:13 UTC
+++ config.mk
@@ -288,7 +288,7 @@ ifeq ($(WITH_WEBSOCKETS),static)
 endif
 
 INSTALL?=install
-prefix?=/usr/local
+prefix?=${PREFIX}
 incdir?=${prefix}/include
 libdir?=${prefix}/lib${LIB_SUFFIX}
 localedir?=${prefix}/share/locale
