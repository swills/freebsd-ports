--- src/tpm_mgmt/tpm_present.c.orig	2017-02-21 04:23:57.000000000 +0300
+++ src/tpm_mgmt/tpm_present.c	2018-11-18 13:21:03.884938000 +0300
@@ -168,9 +168,10 @@
 	TSS_HPOLICY hTpmPolicy;
 	char *pwd = NULL;
 	int pswd_len;
-	char rsp[5];
+	char rsp[6];
 	int scanCount;
 
+	memset(&hTpmPolicy, 0, sizeof(hTpmPolicy));
 	//get status w/o owner auth (FAILS 1.1, should PASS 1.2)
 	if (tpmGetStatus(hTpm, flags[cmdEnable].property, &bCmd) !=
 	    TSS_SUCCESS
