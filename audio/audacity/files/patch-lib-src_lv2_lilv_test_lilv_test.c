--- lib-src/lv2/lilv/test/lilv_test.c.orig	2020-05-18 17:13:29.952774000 -0700
+++ lib-src/lv2/lilv/test/lilv_test.c	2020-05-18 16:32:22.956444000 -0700
@@ -15,8 +15,10 @@
   OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
 
-#define _POSIX_C_SOURCE 200809L /* for setenv */
-#define _XOPEN_SOURCE   600     /* for mkstemp */
+#ifndef__FreeBSD__
+  #define _POSIX_C_SOURCE 200809L /* for setenv */
+  #define _XOPEN_SOURCE   600     /* for mkstemp */
+#endiff
 
 #include "../src/lilv_internal.h"
 
