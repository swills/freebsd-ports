--- cloudinit/net/__init__.py.orig	2019-07-17 16:30:07 UTC
+++ cloudinit/net/__init__.py
@@ -585,6 +585,27 @@ def get_ib_interface_hwaddr(ifname, ethernet_format):
 
 
 def get_interfaces_by_mac():
+    if util.is_FreeBSD():
+        return get_interfaces_by_mac_on_freebsd()
+    else:
+        return get_interfaces_by_mac_on_linux()
+
+
+def get_interfaces_by_mac_on_freebsd():
+    ret = {}
+    (out, _) = util.subp(['ifconfig', '-a'])
+    blocks = re.split(r'(^\S+|\n\S+):', out)
+    blocks.reverse()
+    blocks.pop()  # Ignore the first one
+    while blocks:
+        ifname = blocks.pop()
+        m = re.search(r'ether\s([\da-f:]{17})', blocks.pop())
+        if m and m.group(1):
+            ret[m.group(1)] = ifname
+    return ret
+
+
+def get_interfaces_by_mac_on_linux():
     """Build a dictionary of tuples {mac: name}.
 
     Bridges and any devices that have a 'stolen' mac are excluded."""
