--- src/bbcp_Pthread.C.orig	2018-06-18 04:40:04 UTC
+++ src/bbcp_Pthread.C
@@ -128,7 +128,7 @@ int bbcp_CondVar::WaitMS(int msec)
 /*                              C o n d W a i t                               */
 /******************************************************************************/
 
-#if defined(MACOS) || defined(AIX)
+#if defined(MACOS) || defined(AIX) || defined(FREEBSD)
 
 int bbcp_Semaphore::CondWait()
 {
@@ -215,7 +215,7 @@ int  bbcp_Thread_Start(void *(*proc)(void *), void *ar
 void *bbcp_Thread_Wait(pthread_t tid)
     {long retc;
      void *tstat;
-     if (retc = pthread_join(tid, (void **)&tstat)) tstat = (void *)retc;
+     if ((retc = pthread_join(tid, (void **)&tstat))) tstat = (void *)retc;
      return tstat;
     }
 
