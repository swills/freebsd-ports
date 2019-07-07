--- common/util.cc.orig	2019-07-07 21:11:37.172488000 +1200
+++ common/util.cc	2019-07-07 21:12:29.799698000 +1200
@@ -180,10 +180,9 @@
 void spoofer_rand_stir()
 {
 #if defined(HAVE_ARC4RANDOM)
- #if defined(__OpenBSD__) && !defined(HAVE_ARC4RANDOM_STIR)
+ #if defined(HAVE_ARC4RANDOM_STIR)
     // On OpenBSD 5.5+, the arc4random() function is not actually the ARC4
     // algorithm, and there is no arc4random_stir() function.
- #else
     arc4random_stir();
  #endif
 #elif defined(HAVE_SRANDOMDEV)
