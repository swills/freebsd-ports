--- setup.py.orig	2018-12-11 11:37:54 UTC
+++ setup.py
@@ -40,7 +40,6 @@ test_requires = [
 setup(
     name='Wand',
     packages=['wand', 'wand.cdefs'],
-    data_files=[('', ['README.rst'])],
     version=VERSION,
     description='Ctypes-based simple MagickWand API binding for Python',
     long_description=readme(),
