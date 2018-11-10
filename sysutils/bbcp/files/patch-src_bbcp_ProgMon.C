--- src/bbcp_ProgMon.C.orig	2018-06-18 04:32:15 UTC
+++ src/bbcp_ProgMon.C
@@ -146,7 +146,7 @@ void bbcp_ProgMon::Start(bbcp_File *fs_obj, bbcp_ZCX *
 
 // Run a thread to start the monitor
 //
-   if (retc = bbcp_Thread_Run(bbcp_MonProg, (void *)this, &mytid))
+   if ((retc = bbcp_Thread_Run(bbcp_MonProg, (void *)this, &mytid)))
       {DEBUG("Error " <<retc <<" starting progress monitor thread.");}
       else {DEBUG("Thread " <<mytid <<" monitoring progress.");}
    return;
