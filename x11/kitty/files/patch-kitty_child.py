--- kitty/child.py.orig	2019-02-18 00:01:25 UTC
+++ kitty/child.py
@@ -4,6 +4,7 @@
 
 import fcntl
 import os
+import pty
 from collections import defaultdict
 from contextlib import contextmanager
 
@@ -153,7 +154,7 @@ class Child:
         if self.forked:
             return
         self.forked = True
-        master, slave = os.openpty()  # Note that master and slave are in blocking mode
+        master, slave = pty.openpty()  # Note that master and slave are in blocking mode
         remove_cloexec(slave)
         fast_data_types.set_iutf8(master, True)
         stdin, self.stdin = self.stdin, None
