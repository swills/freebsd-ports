--- src/wifimgr.h.orig	2020-08-23 08:35:32 UTC
+++ src/wifimgr.h
@@ -131,6 +131,11 @@ struct conflist {
 	int			cl_value;
 };
 
+struct intfs {
+	char *			wifi;
+	char *			aggr;
+};
+
 extern struct conflist		conf_auth_alg[];
 extern struct conflist		conf_eap[];
 extern struct conflist		conf_group[];
@@ -138,7 +143,7 @@ extern struct conflist		conf_key_mgmt[];
 extern struct conflist		conf_pairwise[];
 extern struct conflist		conf_proto[];
 extern struct wifi_net *	nets;
-extern char *			wifi_if;
+extern struct intfs *		intf;
 extern int			wifi_if_status;
 #define WIFI_IF_DOWN		0
 #define WIFI_IF_UP		1
