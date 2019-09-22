--- cloudinit/config/tests/test_set_passwords.py.orig	2019-07-17 16:30:07 UTC
+++ cloudinit/config/tests/test_set_passwords.py
@@ -101,11 +101,18 @@ class TestSetPasswordsHandle(CiTestCase):
             'DEBUG: Handling input for chpasswd as list.',
             self.logs.getvalue())
         self.assertIn(
-            "DEBUG: Setting hashed password for ['root', 'ubuntu']",
+            "DEBUG: Setting password for: root",
             self.logs.getvalue())
-        self.assertEqual(
-            [mock.call(['chpasswd', '-e'],
-             '\n'.join(valid_hashed_pwds) + '\n')],
+        self.assertIn(
+            "DEBUG: Setting password for: ubuntu",
+            self.logs.getvalue())
+        self.assertEqual([
+            mock.call(['chpasswd', '-e'], valid_hashed_pwds[0],
+                      logstring='chpasswd for root'),
+            mock.call(['passwd', '--expire', 'root']),
+            mock.call(['chpasswd', '-e'], valid_hashed_pwds[1],
+                      logstring='chpasswd for ubuntu'),
+            mock.call(['passwd', '--expire', 'ubuntu'])],
             m_subp.call_args_list)
 
 # vi: ts=4 expandtab
