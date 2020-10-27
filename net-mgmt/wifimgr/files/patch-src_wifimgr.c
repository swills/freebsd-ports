--- src/wifimgr.c.orig	2018-08-31 19:34:01 UTC
+++ src/wifimgr.c
@@ -51,7 +51,7 @@
 #define gettext(x)	(x)
 #endif
 
-char *			wifi_if;
+struct intfs *		intf;
 int			wifi_if_status;
 struct wifi_net *	nets;
 char			conf_ctrl_interface[256];
@@ -109,43 +109,79 @@ struct conflist	conf_proto[] = {
 };
 
 /*
-** parse /etc/rc.conf to find WiFi interface
+** FreeBSD: parse /etc/rc.conf*   to find WiFi and lagg  interfaces
+** OpenBSD: parse /etc/hostname.* to find WiFi and trunk interfaces
+** NetBSD:  parse /etc/ifconfig.* to find WiFi and agr   interfaces
 */
-char *
-find_wifi_if(char * file) {
+struct intfs *
+find_intf(char * file) {
 	FILE *			fp;
 	char			line[1024];
 	char *			p;
+	char			s[256+10];
 	static char		wifi_if[256];
+	static char		aggr_if[256];
+	static struct intfs	stat_intf;
+	struct intfs *		intf=&stat_intf;
 
 	if ((fp = fopen(file, "r")) == NULL)
-		return NULL;
+		return intf;
 
 	while(fgets(line, sizeof(line), fp) != NULL) {
 		for (p = line; *p == ' ' || *p == '\t'; p++);
 		if (*p == '#')
 			continue;
-		if (strncmp(p, "ifconfig_", 9) == 0
-		    && strstr(p, "=\"")
-		    && strstr(p, "WPA")
-		) {
-			sscanf(p, "ifconfig_%[^=]=", wifi_if);
-			fclose(fp);
-			return wifi_if;
+		if (intf->wifi == NULL) {
+			if (strncmp(p, "ifconfig_", 9) == 0
+			    && strstr(p, "=\"")
+			    && strstr(p, "WPA")) {
+				sscanf(p, "ifconfig_%[^=]=", wifi_if);
+				intf->wifi = wifi_if;
+				rewind(fp); /* within the same rc file, do not assume that     */
+				continue;   /* the WiFi interface appears before the aggregate */
+			}
+			if (strncmp(p, "wpa_supplicant_flags", 20) == 0
+			    && strstr(p, "-i")) {
+				p = strstr(p, "-i");
+				sscanf(p, "-i %[^ \"]", wifi_if);
+				intf->wifi = wifi_if;
+				rewind(fp); /* Same comment */
+				continue;
+			}
 		}
-		if (strncmp(p, "wpa_supplicant_flags", 20) == 0
-		    && strstr(p, "-i")
-		) {
-			p = strstr(p, "-i");
-			sscanf(p, "-i %[^ \"]", wifi_if);
-			fclose(fp);
-			return wifi_if;
+		/* now that we have an interface in intf->wifi,    */
+		/* search for a aggregate that uses this interface */
+		else if (intf->aggr == NULL) {
+			sprintf (s, "laggport %s", intf->wifi);
+			if (strncmp(p, "ifconfig_", 9) == 0
+			    && strstr(p, "=\"")
+			    && strstr(p, s)) {
+				sscanf(p, "ifconfig_%[^=]=", aggr_if);
+				intf->aggr = aggr_if;
+				return intf;
+			}
+			sprintf (s, "trunkport %s", intf->wifi);
+			if (strstr(p, s)) {
+				if (strstr(file, "hostname.") == NULL)
+					return intf;
+				sscanf(strstr(file, "hostname."), "hostname.%s", aggr_if);
+				intf->aggr = aggr_if;
+				return intf;
+			}
+			sprintf (s, "agrport %s", intf->wifi);
+			if (strstr(p, s)) {
+				if (strstr(file, "hostname.") == NULL)
+					return intf;
+				sscanf(strstr(file, "hostname."), "hostname.%s", aggr_if);
+				intf->aggr = aggr_if;
+				return intf;
+			}
 		}
 	}
 
 	fclose(fp);
 
-	return NULL;
+	return intf;
 }
 
 /*
@@ -220,7 +256,6 @@ read_networks_file(char * file) {
 				exit(1);
 			}
 			memset(new, 0, sizeof(*new));
-
 			new->wn_enabled = 1;
 			new->wn_next = NULL;
 		}
@@ -775,7 +810,7 @@ restart_intf() {
 	/* there must be a config file for wpa_supplicant(8) to start */
 	check_networks_file(NETWORKS_FILE);
 
-	fprintf(sucmd, "restart_netif %s\n", wifi_if);
+	fprintf(sucmd, "restart_netif %s %s\n", intf->wifi, intf->aggr);
 	fgets(resp, sizeof(resp), sucmd);
 	chop(resp);
 	if (strcmp(resp, "OK") != 0) {
@@ -783,13 +818,13 @@ restart_intf() {
 		char *		err;
 
 		err = index(resp, ' ') + 1;
-		sprintf(buf, gettext("Cannot reset interface <b>%s</b> - %s."), wifi_if, err);
+		sprintf(buf, gettext("Cannot reset interface <b>%s</b> - %s."), intf->wifi, err);
 		gui_message(buf, MSG_ERROR);
 		exit(1);
 	}
 
 	/* loop up to 10 seconds for interface to re-associate */
-	while (!ifconfig_associated_network(wifi_if) && count++ < 20)
+	while (!ifconfig_associated_network(intf->wifi) && count++ < 20)
 		usleep(500000);
 
 	return 1;
@@ -799,7 +834,7 @@ restart_intf() {
 ** scan for currently available networks
 */
 void
-ifconfig_network_scan(char * intf) {
+ifconfig_network_scan(char * wifi_if) {
 	char			line[2048];	/* yes, some lines are longer than 1024 bytes! */
 	char			cmd[256];
 	FILE *			fp;
@@ -817,7 +852,7 @@ ifconfig_network_scan(char * intf) {
 	if (wifi_if_status != WIFI_IF_UP)
 		return;
 
-	sprintf(cmd, "%s -v %s list scan | %s 's/^ /-/'", PATH_IFCONFIG, intf, PATH_SED);
+	sprintf(cmd, "%s -v %s list scan | %s 's/^ /-/'", PATH_IFCONFIG, wifi_if, PATH_SED);
 
 	if ((fp = popen(cmd, "r")) == NULL) {
 		char		buf[256];
@@ -912,14 +947,14 @@ ifconfig_network_scan(char * intf) {
 ** run ifconfig to find interface UP/DOWN status
 */
 int
-ifconfig_intf_status(char * intf) {
+ifconfig_intf_status(char * wifi_if) {
 	char			cmd[256];
 	FILE *			fp;
 	char			line[1024];
 	int			status;
 
 	/* run ifconfig command */
-	sprintf(cmd, "%s %s", PATH_IFCONFIG, intf);
+	sprintf(cmd, "%s %s", PATH_IFCONFIG, wifi_if);
 	if ((fp = popen(cmd, "r")) == NULL) {
 		char		buf[256];
 		sprintf(buf, gettext("Cannot exec %s."), PATH_IFCONFIG);
@@ -946,7 +981,7 @@ ifconfig_intf_status(char * intf) {
 **	return SSID if network is specified with SSID/any_bssid
 */
 char *
-ifconfig_associated_network(char * intf) {
+ifconfig_associated_network(char * wifi_if) {
 	char			cmd[256];
 	FILE *			fp;
 	char			line[1024];
@@ -958,7 +993,7 @@ ifconfig_associated_network(char * intf) {
 	struct wifi_net *	net;
 
 	/* run ifconfig command */
-	sprintf(cmd, "%s %s", PATH_IFCONFIG, intf);
+	sprintf(cmd, "%s %s", PATH_IFCONFIG, wifi_if);
 	if ((fp = popen(cmd, "r")) == NULL) {
 		char		buf[256];
 		sprintf(buf, gettext("Cannot exec %s."), PATH_IFCONFIG);
@@ -1008,7 +1043,7 @@ ifconfig_associated_network(char * intf) {
 ** toggle interface up or down
 */
 int
-toggle_intf_up_down(char * intf) {
+toggle_intf_up_down(char * wifi_if) {
 	char			resp[256];
 	int			count = 0;
 
@@ -1017,7 +1052,7 @@ toggle_intf_up_down(char * intf) {
 		check_networks_file(NETWORKS_FILE);
 
 	/* execute su command enable/disable interface */
-	fprintf(sucmd, "%s_netif %s\n", (wifi_if_status == WIFI_IF_DOWN) ? "start" : "stop", wifi_if);
+	fprintf(sucmd, "%s_netif %s\n", (wifi_if_status == WIFI_IF_DOWN) ? "start" : "stop", intf->wifi);
 	fgets(resp, sizeof(resp), sucmd);
 	chop(resp);
 	if (strcmp(resp, "OK") != 0) {
@@ -1033,10 +1068,10 @@ toggle_intf_up_down(char * intf) {
 
 	if (wifi_if_status == WIFI_IF_DOWN)
 		/* loop up to 10 seconds for interface to re-associate */
-		while (!ifconfig_associated_network(wifi_if) && count++ < 20)
+		while (!ifconfig_associated_network(intf->wifi) && count++ < 20)
 			usleep(500000);
 
-	wifi_if_status = ifconfig_intf_status(intf);
+	wifi_if_status = ifconfig_intf_status(wifi_if);
 
 	return wifi_if_status;
 }
@@ -1259,9 +1294,19 @@ main(int argc, char ** argv) {
 	/* open channel to setuid backend */
 	wifimgrsu_init();
 
-	/* find WiFi interface */
-	if ((wifi_if = find_wifi_if(RC_CONF_LOCAL_FILE)) == NULL &&
-	    (wifi_if = find_wifi_if(RC_CONF_FILE)) == NULL) {
+	/* find the first WiFi interface, then the first aggregate that uses that interface
+	**
+	** Do not assume that the WiFi interface and the aggregate
+	** that uses it are configured in the same configuration file,
+	** and give precedence to /etc/rc.conf.local over /etc/rc.conf
+	** for both WiFi configuration and link aggregation.
+	**
+	** The logic would be much simpler on OpenBSD/NetBSD since
+	** one usually use one configuration file per interface.
+	*/
+	if ((intf = find_intf(RC_CONF_LOCAL_FILE))->aggr == NULL
+	 && (intf = find_intf(RC_CONF_FILE))->aggr == NULL
+	 && (intf = find_intf(RC_CONF_LOCAL_FILE))->wifi == NULL) {
 		char		buf[256];
 		sprintf(buf, gettext("No WiFi interface is configured in <b>%s</b>."), RC_CONF_FILE);
 		gui_message(buf, MSG_ERROR);
@@ -1269,7 +1314,7 @@ main(int argc, char ** argv) {
 	}
 
 	/* find interface status */
-	wifi_if_status = ifconfig_intf_status(wifi_if);
+	wifi_if_status = ifconfig_intf_status(intf->wifi);
 
 	/* load rc config */
 	cache_load_config();
