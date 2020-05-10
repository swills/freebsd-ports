--- setup.py.orig	2020-05-06 08:49:32 UTC
+++ setup.py
@@ -136,7 +136,7 @@ class clean(distutils.command.clean.clean):
 
 setup(
     name="rdiff-backup",
-    use_scm_version=True,
+    use_scm_version=False,
     description="Backup and Restore utility, easy to use, efficient, locally and remotely usable",
     long_description="""
         rdiff-backup is a simple backup tool which can be used locally and remotely,
@@ -222,5 +222,4 @@ setup(
         'build_py': build_py,
         'clean': clean,
     },
-    setup_requires=['setuptools_scm'],
 )
