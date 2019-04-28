--- scripts/restricted_from_passwd.py.orig	2019-04-12 21:50:37 UTC
+++ scripts/restricted_from_passwd.py
@@ -12,6 +12,7 @@
 ############################################################################
 
 RESTRICTED_SHELLS = ("/sbin/nologin",
+                     "/usr/sbin/nologin",
                      "/sbin/shutdown",
                      "/sbin/halt")
 
