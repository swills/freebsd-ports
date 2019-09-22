--- cloudinit/distros/__init__.py.orig	2019-09-05 10:12:03 UTC
+++ cloudinit/distros/__init__.py
@@ -591,7 +591,7 @@ class Distro(object):
             util.logexc(LOG, 'Failed to disable password for user %s', name)
             raise e
 
-    def set_passwd(self, user, passwd, hashed=False):
+    def set_passwd(self, user, passwd, hashed=False, force_change=False):
         pass_string = '%s:%s' % (user, passwd)
         cmd = ['chpasswd']
 
@@ -606,8 +606,17 @@ class Distro(object):
         except Exception as e:
             util.logexc(LOG, "Failed to set password for %s", user)
             raise e
-
         return True
+
+    def force_passwd_change(self, user):
+        """
+        The users will have to enter a new password the first time they log in
+        """
+        try:
+            util.subp(['passwd', '--expire', user])
+        except Exception as e:
+            util.logexc(LOG, "Failed to set pw expiration for %s", user)
+            raise e
 
     def ensure_sudo_dir(self, path, sudo_base='/etc/sudoers'):
         # Ensure the dir is included and that
