--- ec.c.orig	2018-09-24 09:56:56 UTC
+++ ec.c
@@ -201,7 +201,7 @@ str2e(register char *str, register u_cha
 	u_int n[6];
 
 	MEMSET(n, 0, sizeof(n));
-	if (sscanf(str, "%x:%x:%x:%x:%x:%x",
+	if (sscanf(str, "%02x:%02x:%02x:%02x:%02x:%02x",
 	    &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]) != 6)
 		return (0);
 	for (i = 0; i < 6; ++i) {
@@ -218,7 +218,7 @@ e2str(register u_char *e)
 {
 	static char str[32];
 
-	(void)sprintf(str, "%x:%x:%x:%x:%x:%x",
+	(void)sprintf(str, "%02x:%02x:%02x:%02x:%02x:%02x",
 	    e[0], e[1], e[2], e[3], e[4], e[5]);
 	return (str);
 }
