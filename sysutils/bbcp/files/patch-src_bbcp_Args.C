--- src/bbcp_Args.C.orig	2018-06-18 04:17:54 UTC
+++ src/bbcp_Args.C
@@ -58,7 +58,7 @@ char *operator%(char *optarg)
          bbcp_Opt *p = this;
          do if (i <= p->Optmaxl && i >= p->Optminl &&
                !strncmp(p->Optword, optarg, i)) return p->Optvalu;
-            while(p = p->Optnext);
+            while((p = p->Optnext));
          return 0;
         }
 
@@ -203,7 +203,7 @@ char bbcp_Args::getopt()
    if (optspec[1] == '.')
       {if (argval && *argval == '-')
           if (inStream) arg_stream.RetToken();
-             else Aloc--;
+             }else{ Aloc--;
        argval = 0;
        return *optspec;
       }
