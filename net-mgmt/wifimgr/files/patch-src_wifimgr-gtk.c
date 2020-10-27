--- src/wifimgr-gtk.c.orig	2020-10-12 00:55:51 UTC
+++ src/wifimgr-gtk.c
@@ -1175,12 +1175,12 @@ gui_fill_network_table(GtkWidget * x, gpointer * gp) {
 	col = 0;
 
 	if (!nets) {
-		nets = build_network_list(wifi_if);
+		nets = build_network_list(intf->wifi);
 		gui_order_networks();
 	}
 
 	if (wifi_if_status == WIFI_IF_UP)
-		associated_net = ifconfig_associated_network(wifi_if);
+		associated_net = ifconfig_associated_network(intf->wifi);
 	else
 		associated_net = NULL;
 
@@ -1359,7 +1359,7 @@ gui_interface_up_down(GtkWidget * x1, gpointer * x2) {
 
 	gui_changes = 0;
 
-	toggle_intf_up_down(wifi_if);
+	toggle_intf_up_down(intf->wifi);
 
 	/* change the main icon */
 	icon = (wifi_if_status == WIFI_IF_UP) ? ICON_PATH "/wifimgr.png" : ICON_PATH "/wifimgr-grey.png";
