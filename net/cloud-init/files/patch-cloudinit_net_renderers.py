--- cloudinit/net/renderers.py.orig	2019-07-17 16:30:07 UTC
+++ cloudinit/net/renderers.py
@@ -1,17 +1,19 @@
 # This file is part of cloud-init. See LICENSE file for license information.
 
 from . import eni
+from . import freebsd
 from . import netplan
 from . import RendererNotFoundError
 from . import sysconfig
 
 NAME_TO_RENDERER = {
     "eni": eni,
+    "freebsd": freebsd,
     "netplan": netplan,
     "sysconfig": sysconfig,
 }
 
-DEFAULT_PRIORITY = ["eni", "sysconfig", "netplan"]
+DEFAULT_PRIORITY = ["eni", "sysconfig", "netplan", "freebsd"]
 
 
 def search(priority=None, target=None, first=False):
