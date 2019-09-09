--- rewrite.c.orig	2019-09-06 16:34:45 UTC
+++ rewrite.c
@@ -5,6 +5,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <regex.h>
+#include <arpa/inet.h>
 #include "debug.h"
 #include "gconfig.h"
 #include "hash.h"
