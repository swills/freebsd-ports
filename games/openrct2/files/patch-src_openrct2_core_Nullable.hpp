--- src/openrct2/core/Nullable.hpp.orig	2018-06-12 14:10:09 UTC
+++ src/openrct2/core/Nullable.hpp
@@ -17,6 +17,7 @@
 #pragma once
 
 #include "../common.h"
+#include <cstddef>
 
 template<typename T>
 struct Nullable
