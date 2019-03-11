--- rubberband/src/StretcherProcess.cpp.orig	2019-02-24 20:01:56.974984000 +0100
+++ rubberband/src/StretcherProcess.cpp	2019-02-24 20:02:05.506472000 +0100
@@ -34,10 +34,6 @@
 #include "base/Profiler.h"
 #include "system/VectorOps.h"
 
-#ifndef _WIN32
-#include <alloca.h>
-#endif
-
 #include <cassert>
 #include <cmath>
 #include <set>
