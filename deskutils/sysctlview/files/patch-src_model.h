--- src/model.h.orig	2021-02-27 00:43:26 UTC
+++ src/model.h
@@ -26,6 +26,8 @@
 #ifndef _MODEL_H_
 #define _MODEL_H_
 
+#include <sys/sysctl.h>
+
 extern "C"{
 #include <sysctlmibinfo2.h>
 }
