--- doc/rtd/topics/network-config.rst.orig	2019-07-17 16:30:07 UTC
+++ doc/rtd/topics/network-config.rst
@@ -191,7 +191,7 @@ supplying an updated configuration in cloud-config. ::
 
   system_info:
     network:
-      renderers: ['netplan', 'eni', 'sysconfig']
+      renderers: ['netplan', 'eni', 'sysconfig', 'freebsd']
 
 
 Network Configuration Tools
