--- src/bbcp_ProcMon.C.orig	2018-06-18 04:31:41 UTC
+++ src/bbcp_ProcMon.C
@@ -132,7 +132,7 @@ void bbcp_ProcMon::Start(pid_t monit, bbcp_Node *Remot
 
 // Run a thread to start the monitor
 //
-   if (retc = bbcp_Thread_Run(bbcp_MonProc, (void *)this, &mytid))
+   if ((retc = bbcp_Thread_Run(bbcp_MonProc, (void *)this, &mytid)))
       {DEBUG("Error " <<retc <<" starting MonProc thread.");}
       else {DEBUG("Thread " <<mytid <<" monitoring process " <<monPID);}
    return;
@@ -154,7 +154,7 @@ void bbcp_ProcMon::Start(int seclim, bbcp_BuffPool *bu
 
 // Run a thread to start the monitor
 //
-   if (retc = bbcp_Thread_Run(bbcp_MonProc, (void *)this, &mytid))
+   if ((retc = bbcp_Thread_Run(bbcp_MonProc, (void *)this, &mytid)))
       {DEBUG("Error " <<retc <<" starting buffpool monitor thread.");}
       else {DEBUG("Thread " <<mytid <<" monitoring buffpool.");}
    return;
