--- src/StatisticsStrategy.cpp.orig	2018-09-06 10:01:39 UTC
+++ src/StatisticsStrategy.cpp
@@ -140,7 +140,7 @@ double StatisticsStrategy::StatTracker::
   if (_nodeCount == 0)
     return 0.0;
   else {
-    mpz_class q = mpq_class(_subGenSum) / _nodeCount;
+    mpq_class q = mpq_class(_subGenSum) / _nodeCount;
     return q.get_d();
   }
 }
