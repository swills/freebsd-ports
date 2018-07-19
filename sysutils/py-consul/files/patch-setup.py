--- setup.py.orig	2018-05-17 20:20:19 UTC
+++ setup.py
@@ -20,16 +20,16 @@ requirements = [
 description = "Python client for Consul (http://www.consul.io/)"
 
 
+# Issue #123: skip installation of consul.aio if python version < 3.4.2
+# as this version or later is required by aiohttp
 py_modules = [os.path.splitext(x)[0] for x in glob.glob('consul/*.py')]
+if sys.version_info < (3, 4, 2):
+    if 'consul/aio' in py_modules:
+        py_modules.remove('consul/aio')
 
 
 class Install(install):
     def run(self):
-        # Issue #123: skip installation of consul.aio if python version < 3.4.2
-        # as this version or later is required by aiohttp
-        if sys.version_info < (3, 4, 2):
-            if 'consul/aio' in self.distribution.py_modules:
-                self.distribution.py_modules.remove('consul/aio')
         install.run(self)
 
 
