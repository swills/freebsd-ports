--- bqvec/src/VectorOpsComplex.cpp.orig	2019-02-24 19:47:00.932155000 +0100
+++ bqvec/src/VectorOpsComplex.cpp	2019-02-24 19:47:27.692142000 +0100
@@ -45,15 +45,6 @@
 #endif
 #endif
 
-#if defined(_MSC_VER) || defined(WIN32)
-#include <malloc.h>
-#ifndef alloca
-#define alloca _alloca
-#endif
-#else
-#include <alloca.h>
-#endif
-
 #include <iostream>
 
 using namespace std;
