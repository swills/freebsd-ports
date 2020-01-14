--- examples/rapolicy/rapolicy.c.orig	2019-12-30 04:00:06 UTC
+++ examples/rapolicy/rapolicy.c
@@ -88,7 +88,7 @@ ArgusClientInit (struct ArgusParserStruct *parser)
          RaPolicyParseResourceFile (parser, parser->ArgusFlowModelFile, &RaPolicy);
       } else {
          if (!(parser->Xflag)) {
-            RaPolicyParseResourceFile (parser, "/etc/rapolicy.conf", &RaPolicy);
+            RaPolicyParseResourceFile (parser, "%%PREFIX%%/etc/rapolicy.conf", &RaPolicy);
          }
       }
    }
