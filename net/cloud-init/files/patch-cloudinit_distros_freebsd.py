--- cloudinit/distros/freebsd.py.orig	2019-09-05 10:12:03 UTC
+++ cloudinit/distros/freebsd.py
@@ -136,7 +136,7 @@ class Distro(distros.Distro):
         if passwd_val is not None:
             self.set_passwd(name, passwd_val, hashed=True)
 
-    def set_passwd(self, user, passwd, hashed=False):
+    def set_passwd(self, user, passwd, hashed=False, force_change=False):
         if hashed:
             hash_opt = "-H"
         else:
@@ -147,6 +147,13 @@ class Distro(distros.Distro):
                       data=passwd, logstring="chpasswd for %s" % user)
         except Exception as e:
             util.logexc(LOG, "Failed to set password for %s", user)
+            raise e
+
+    def force_passwd_change(self, user):
+        try:
+            util.subp(['pw', 'usermod', user, '-p', '01-Jan-1970'])
+        except Exception as e:
+            util.logexc(LOG, "Failed to set pw expiration for %s", user)
             raise e
 
     def lock_passwd(self, name):
