--- src/bbcp_Stream.C.orig	2018-06-18 04:50:56 UTC
+++ src/bbcp_Stream.C
@@ -206,7 +206,7 @@ int bbcp_Stream::Exec(char **parm, int inrd, int inerr
            return bbcp_Emsg("Exec",errno,"creating a pipe for",parm[0]);
         Child_In=fildes_In[0]; Child_Out=fildes_Out[1]; Child_Err=fildes_Err[1];
         fildes_Out[1] = (inrd ? fildes_In[1] : -1);
-        if (retc = Attach(fildes_Out)) return retc;
+        if ((retc = Attach(fildes_Out))) return retc;
        }
 
     // Fork a process first so we can pick up the next request.
@@ -436,7 +436,7 @@ char *bbcp_Stream::GetWord(int lowcase)
      // If we have a token, return it
      //
      xline = 1;
-     if (wp = GetToken(lowcase)) return wp;
+     if ((wp = GetToken(lowcase))) return wp;
 
      // If no continuation allowed, return a null (but only once)
      //
