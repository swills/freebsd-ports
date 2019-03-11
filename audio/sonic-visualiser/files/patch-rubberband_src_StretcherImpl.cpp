--- rubberband/src/StretcherImpl.cpp.orig	2019-02-24 20:03:17.214195000 +0100
+++ rubberband/src/StretcherImpl.cpp	2019-02-24 20:03:23.369920000 +0100
@@ -37,10 +37,6 @@
 
 #include "base/Profiler.h"
 
-#ifndef _WIN32
-#include <alloca.h>
-#endif
-
 #include <cassert>
 #include <cmath>
 #include <set>
