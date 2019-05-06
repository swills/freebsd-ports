--- Source/WebCore/contentextensions/DFACombiner.cpp.orig	2019-04-21 14:39:30 UTC
+++ Source/WebCore/contentextensions/DFACombiner.cpp
@@ -37,7 +37,7 @@ namespace WebCore {
 namespace ContentExtensions {
 
 class DFAMerger {
-    typedef MutableRangeList<char, uint64_t, 128> CombinedTransitionsMutableRangeList;
+    typedef MutableRangeList<signed char, uint64_t, 128> CombinedTransitionsMutableRangeList;
 
     enum class WhichDFA {
         A,
