# Description: LookupError with Github tarball installation
# Issue-ID: https://github.com/scheibler/khard/issues/230
# TODO: Either use the pypi tarball again or wait for a fixed tarball at github

--- setup.py.orig	2019-11-02 18:58:02.715813000 +0100
+++ setup.py	2019-11-02 20:33:17.111403000 +0100
@@ -12,6 +12,7 @@
 
 setup(
     name='khard',
+    version='0.15.0',
     author='Eric Scheibler',
     author_email='email@eric-scheibler.de',
     url='https://github.com/scheibler/khard/',
@@ -36,8 +37,6 @@
         'unidecode',
         'vobject'
     ],
-    use_scm_version={'write_to': 'khard/version.py'},
-    setup_requires=['setuptools_scm'],
     packages=['khard'],
     entry_points={'console_scripts': ['khard = khard.khard:main']},
     test_suite="test",
