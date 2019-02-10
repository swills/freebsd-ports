--- setup.py.orig	2018-05-17 01:08:07 UTC
+++ setup.py
@@ -12,9 +12,10 @@ def get_data_files():
     for path, dirs, files in walk('share'):
         target_path = os.path.join('/usr', path)
 
-        data_files.append((
-            target_path, [os.path.join(path, f) for f in files]
-        ))
+        if files != []:
+            data_files.append((
+                target_path, [os.path.join(path, f) for f in files]
+            ))
 
     data_files.append(
         ("/etc/xdg/autostart", ["share/applications/caffeine.desktop"])
