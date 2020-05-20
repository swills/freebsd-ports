--- plugins/coroae/uwsgiplugin.py.orig	2019-02-09 14:48:07 UTC
+++ plugins/coroae/uwsgiplugin.py
@@ -9,7 +9,7 @@ for p in search_paths:
         coroapi = p
 
 if not coroapi:
-    print "unable to find the Coro perl module !!!"
+    print("unable to find the Coro perl module !!!")
     sys.exit(1)
 
 NAME='coroae'
