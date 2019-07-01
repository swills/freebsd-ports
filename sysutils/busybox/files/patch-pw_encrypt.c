--- libbb/pw_encrypt.c	2019-07-01 13:32:04.055906000 +0200
+++ libbb/pw_encrypt.c	2019-07-01 09:35:43.429286000 +0200
@@ -6,7 +6,7 @@
  *
  * Licensed under GPLv2 or later, see file LICENSE in this source tree.
  */
-#include <crypt.h>
+#include <unistd.h>
 #include "libbb.h"
 
 /* static const uint8_t ascii64[] ALIGN1 =
