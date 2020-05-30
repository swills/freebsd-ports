--- src/security_default.c.orig	2019-11-28 17:15:13 UTC
+++ src/security_default.c
@@ -18,7 +18,7 @@ Contributors:
 
 #include <stdio.h>
 #include <string.h>
-
+#include <openssl/opensslv.h>
 #include "mosquitto_broker_internal.h"
 #include "memory_mosq.h"
 #include "mqtt_protocol.h"
