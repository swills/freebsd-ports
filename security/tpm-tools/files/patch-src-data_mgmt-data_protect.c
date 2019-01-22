--- src/data_mgmt/data_protect.c.orig	2017-02-21 04:23:57.000000000 +0300
+++ src/data_mgmt/data_protect.c	2018-11-18 13:21:03.884259000 +0300
@@ -437,6 +437,7 @@
 	CK_OBJECT_HANDLE   hObject;
 	CK_MECHANISM       tMechanism = { CKM_AES_ECB, NULL, 0 };
 
+	memset(&hSession, 0, sizeof(hSession));
 	// Set up i18n
 	initIntlSys( );
 
