--- src/bbcp_Node.C.orig	2018-06-18 04:30:55 UTC
+++ src/bbcp_Node.C
@@ -94,7 +94,7 @@ void *bbcp_Connect(void *protp)
      bbcp_Link     *link;
      int            retc;
 
-     if (link = bbcp_Net.Connect(bbcp_Config.CBhost, bbcp_Config.CBport))
+     if ((link = bbcp_Net.Connect(bbcp_Config.CBhost, bbcp_Config.CBport)))
         {if ((retc = protocol->Login(link, 0)) < 0)
             {delete link; link = 0;}
         }
@@ -354,8 +354,8 @@ int bbcp_Node::RecvFile(bbcp_FileSpec *fp, bbcp_Node *
             oflag = O_WRONLY | O_CREAT | O_TRUNC;
            }
    else if (bbcp_Config.Options & bbcp_APPEND)
-           {if (retc = fp->WriteSigFile()) return retc;
-            if (startoff = fp->targetsz) oflag = O_WRONLY;
+           {if ((retc = fp->WriteSigFile())) return retc;
+            if ((startoff = fp->targetsz)) oflag = O_WRONLY;
                else oflag = O_CREAT | O_WRONLY;
            }
    else    oflag = O_WRONLY | O_CREAT | O_EXCL;
@@ -368,7 +368,7 @@ int bbcp_Node::RecvFile(bbcp_FileSpec *fp, bbcp_Node *
 
 // Tell the user what we are bout to do
 //
-   if (bbcp_Config.Options & bbcp_BLAB | bbcp_Config.Progint)
+   if ((bbcp_Config.Options & bbcp_BLAB) | bbcp_Config.Progint)
       if (bbcp_Config.Options & bbcp_APPEND)
          {char buff[32];
           sprintf(buff, "%lld", startoff);
@@ -464,7 +464,7 @@ int bbcp_Node::RecvFile(bbcp_FileSpec *fp, bbcp_Node *
 // Wait for the expansion thread to end
 //
    if (bbcp_Config.Options & bbcp_COMPRESS)
-      {if (tretc = (long)bbcp_Thread_Wait(cxp->TID)) retc = 128;
+      {if ((tretc = (long)bbcp_Thread_Wait(cxp->TID))) retc = 128;
        DEBUG("File expansion ended; rc=" <<tretc);
       }
 
@@ -478,7 +478,7 @@ int bbcp_Node::RecvFile(bbcp_FileSpec *fp, bbcp_Node *
 // Make sure each thread has terminated normally
 //
    for (i = 0; i < dlcount; i++)
-       {if (tretc = (long)bbcp_Thread_Wait(link_tid[i])) retc = 128;
+       {if ((tretc = (long)bbcp_Thread_Wait(link_tid[i]))) retc = 128;
         DEBUG("Thread " <<link_tid[i] <<" stream " <<i <<" ended; rc=" <<tretc);
        }
 
@@ -618,7 +618,7 @@ int bbcp_Node::SendFile(bbcp_FileSpec *fp)
 // Wait for compression thread to end
 //
    if (bbcp_Config.Options & bbcp_COMPRESS)
-      {if (tretc = (long)bbcp_Thread_Wait(cxp->TID)) retc = 128;
+      {if ((tretc = (long)bbcp_Thread_Wait(cxp->TID))) retc = 128;
        DEBUG("File compression ended; rc=" <<tretc);
        delete cxp;
       }
@@ -626,7 +626,7 @@ int bbcp_Node::SendFile(bbcp_FileSpec *fp)
 // Make sure each link thread has terminated normally.
 //
    for (i = 0; i < iocount; i++)
-       {if (tretc = (long)bbcp_Thread_Wait(link_tid[i])) retc = 128;
+       {if ((tretc = (long)bbcp_Thread_Wait(link_tid[i]))) retc = 128;
         DEBUG("Thread " <<link_tid[i] <<" stream " <<i <<" ended; rc=" <<tretc);
        }
 
@@ -735,7 +735,7 @@ int bbcp_Node::Outgoing(bbcp_Protocol *protocol)
 
 // Establish the control connection first
 //
-   if (link = bbcp_Net.Connect(bbcp_Config.CBhost, bbcp_Config.CBport, 3))
+   if ((link = bbcp_Net.Connect(bbcp_Config.CBhost, bbcp_Config.CBport, 3)))
       if ((retc = protocol->Login(link, 0)) < 0)
          {delete link; link = 0;}
 
