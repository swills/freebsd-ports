--- src/switch_utils.c.orig	2019-04-10 01:16:32.491824000 -0400
+++ src/switch_utils.c	2019-04-10 01:17:25.501584000 -0400
@@ -1847,7 +1847,7 @@
 				goto doh;
 			}
 
-			switch_copy_string(buf, get_addr(abuf, sizeof(abuf), (struct sockaddr *) &iface_out, sizeof(struct sockaddr_storage)), len);
+			switch_copy_string(buf, get_addr(abuf, sizeof(abuf), (struct sockaddr *) &iface_out, sizeof(iface_out)), len);
 			if (mask) {
 				get_netmask((struct sockaddr_in *) &iface_out, mask);
 			}
