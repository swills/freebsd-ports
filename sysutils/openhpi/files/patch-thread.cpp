--- plugins/dynamic_simulator/thread.cpp.orig	2018-09-02 00:17:02 UTC
+++ plugins/dynamic_simulator/thread.cpp
@@ -30,7 +30,7 @@
 #include <sys/time.h>
 #include <errno.h>
 
-
+#include <iostream>
 //////////////////////////////////////////////////
 //                  cThread
 //////////////////////////////////////////////////
@@ -238,7 +238,7 @@ cThreadLock::cThreadLock()
   pthread_mutexattr_settype( &attr, PTHREAD_MUTEX_RECURSIVE );
   pthread_mutex_init( &m_lock, &attr );
   pthread_mutexattr_destroy( &attr );
-  cout<<"PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP is Defined"
+  std::cout<<"PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP is Defined";
 }
 #else
 static pthread_mutex_t lock_tmpl = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
