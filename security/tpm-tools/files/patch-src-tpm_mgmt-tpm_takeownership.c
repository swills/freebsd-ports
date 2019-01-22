--- src/tpm_mgmt/tpm_takeownership.c.orig	2017-02-21 04:23:57.000000000 +0300
+++ src/tpm_mgmt/tpm_takeownership.c	2018-11-18 13:21:03.885587000 +0300
@@ -77,6 +77,7 @@
 	{"srk-well-known", no_argument, NULL, 'z'},
 	};
 
+	memset(&hSrk, 0, sizeof(hSrk));
 	initIntlSys();
 
 	if (genericOptHandler
