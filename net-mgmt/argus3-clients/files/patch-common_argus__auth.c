--- common/argus_auth.c.orig	2019-12-29 13:04:50 UTC
+++ common/argus_auth.c
@@ -131,7 +131,7 @@ int RaGetSecret(sasl_conn_t *, void *context, int, sas
 int ArgusSaslGetPath(void *context __attribute__((unused)), char **);
 int ArgusSaslLog (void *context __attribute__((unused)), int, const char *);
 
-#define PLUGINDIR "/usr/lib/sasl2"
+#define PLUGINDIR "%%PREFIX%%/lib/sasl2"
 char *searchpath = NULL;
 
 int
