--- src/bbcp_BuffPool.C.orig	2018-06-18 04:18:26 UTC
+++ src/bbcp_BuffPool.C
@@ -32,7 +32,7 @@
 #include <inttypes.h>
 #include <sys/mman.h>
 
-#if defined(MACOS) || defined(AIX)
+#if defined(MACOS) || defined(AIX) || defined(FREEBSD)
 #define memalign(pgsz,amt) valloc(amt)
 #else
 #include <malloc.h>
@@ -84,14 +84,14 @@ bbcp_BuffPool::~bbcp_BuffPool()
 
 // Free all of the buffers in the empty queue
 //
-   while(currp = last_empty)
+   while((currp = last_empty))
         {last_empty = last_empty->next; delete currp;}
 //cerr <<bbcp_Debug.Who <<"Bdestroy num " <<j++ <<" @ " <<hex <<(int)currp <<dec <<endl;
 
 // Free all full buffers
 //
    FullPool.Lock();
-   while(currp = next_full)
+   while((currp = next_full))
         {next_full = next_full->next; delete currp;}
    FullPool.UnLock();
 }
