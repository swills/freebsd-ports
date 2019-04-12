--- src/chrono/core/ChMatrix.h.orig	2019-03-28 06:51:29 UTC
+++ src/chrono/core/ChMatrix.h
@@ -15,7 +15,9 @@
 #ifndef CHMATRIX_H
 #define CHMATRIX_H
 
+#if defined(CHRONO_HAS_SSE) || defined(CHRONO_HAS_AVX)
 #include <immintrin.h>
+#endif
 
 #include "chrono/core/ChCoordsys.h"
 #include "chrono/core/ChException.h"
