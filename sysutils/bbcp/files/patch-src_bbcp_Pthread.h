--- src/bbcp_Pthread.h.orig	2018-06-18 14:31:39 UTC
+++ src/bbcp_Pthread.h
@@ -108,7 +108,7 @@ void    UnLock() {if (monMutex) {monMutex->UnLock(); m
 bbcp_Mutex *monMutex;
 };
 
-#if defined(MACOS) || defined(AIX)
+#if defined(MACOS) || defined(AIX) || defined(FREEBSD)
 class bbcp_Semaphore
 {
 public:
