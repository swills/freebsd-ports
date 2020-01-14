--- clients/radium.c.orig	2019-12-30 03:56:09 UTC
+++ clients/radium.c
@@ -131,7 +131,7 @@ ArgusClientInit (struct ArgusParserStruct *parser)
          RadiumParseResourceFile (parser, parser->ArgusFlowModelFile);
       } else {
          if (!(parser->Xflag)) {
-            RadiumParseResourceFile (parser, "/etc/radium.conf");
+            RadiumParseResourceFile (parser, "%%PREFIX%%/etc/radium.conf");
          }
       }
 
