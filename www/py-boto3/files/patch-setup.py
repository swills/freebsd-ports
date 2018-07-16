--- setup.py.orig	2018-04-20 14:22:59 UTC
+++ setup.py
@@ -14,11 +14,14 @@ VERSION_RE = re.compile(r'''__version__ 
 
 
 requires = [
-    'botocore>=1.10.5,<1.11.0',
-    'jmespath>=0.7.1,<1.0.0',
-    's3transfer>=0.1.10,<0.2.0'
+    'botocore>=1.10.5',
+    'jmespath>=0.7.1',
+    's3transfer>=0.1.10'
 ]
 
+tests_require = [
+    'nose',
+]
 
 def get_version():
     init = open(os.path.join(ROOT, 'boto3', '__init__.py')).read()
@@ -42,6 +45,8 @@ setup(
     },
     include_package_data=True,
     install_requires=requires,
+    tests_require=tests_require,
+    test_suite='nose.collector',
     license="Apache License 2.0",
     classifiers=[
         'Development Status :: 5 - Production/Stable',
