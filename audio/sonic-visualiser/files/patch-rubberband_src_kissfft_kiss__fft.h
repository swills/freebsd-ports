--- rubberband/src/kissfft/kiss_fft.h.orig	2019-02-24 20:09:18.566723000 +0100
+++ rubberband/src/kissfft/kiss_fft.h	2019-02-24 20:09:30.503363000 +0100
@@ -5,9 +5,6 @@
 #include <stdio.h>
 #include <math.h>
 #include <memory.h>
-#ifndef __APPLE__
-#include <malloc.h>
-#endif
 
 #ifdef __cplusplus
 extern "C" {
