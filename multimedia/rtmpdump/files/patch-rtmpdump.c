--- rtmpdump.c.orig     2021-02-22 23:17:36 UTC
+++ rtmpdump.c
@@ -67,7 +67,7 @@ InitSockets()
 #endif
 }

-inline void
+static inline void
 CleanupSockets()
 {
 #ifdef WIN32
