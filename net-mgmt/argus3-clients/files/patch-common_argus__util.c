--- common/argus_util.c.orig	2019-12-30 03:59:04 UTC
+++ common/argus_util.c
@@ -795,7 +795,7 @@ ArgusMainInit (struct ArgusParserStruct *parser, int a
          noconf++;
 
    if (!(noconf)) {
-      snprintf (path, MAXPATHNAMELEN - 1, "/etc/ra.conf");
+      snprintf (path, MAXPATHNAMELEN - 1, "%%PREFIX%%/etc/ra.conf");
 
       if (stat (path, &statbuf) == 0)
          ArgusParseResourceFile (parser, path);
