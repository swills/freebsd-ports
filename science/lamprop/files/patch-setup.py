--- setup.py.orig	2020-12-29 15:45:52 UTC
+++ setup.py
@@ -4,7 +4,7 @@
 #
 # Copyright © 2020 R.F. Smith <rsmith@xs4all.nl>
 # Created: 2020-10-25T12:18:04+0100
-# Last modified: 2020-12-08T21:57:34+0100
+# Last modified: 2020-12-29T16:46:38+0100
 """Script to install scripts for the local user."""
 
 import os
@@ -81,7 +81,8 @@ def mkarchive(name, modules, main="__main__.py"):
         main: Name of the main file. Defaults to __main__.py
     """
     std = "__main__.py"
-    shebang = b"#!/usr/bin/env python\n"
+    with open(sys.argv[0], "rb") as f:
+        shebang = f.readline()
     if isinstance(modules, str):
         modules = [modules]
     if main != std:
