--- lib-src/lv2/lilv/src/util.c.orig	2020-05-18 17:13:29.952118000 -0700
+++ lib-src/lv2/lilv/src/util.c	2020-05-18 16:38:45.344052000 -0700
@@ -14,7 +14,9 @@
   OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */
 
-#define _POSIX_C_SOURCE 200809L  /* for fileno */
+#ifndef __FreeBSD__
+  #define _POSIX_C_SOURCE 200809L  /* for fileno */
+#endif
 #define _BSD_SOURCE     1        /* for realpath, symlink */
 #define _DEFAULT_SOURCE 1        /* for realpath, symlink */
 
