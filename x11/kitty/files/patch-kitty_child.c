--- kitty/child.c.orig 2018-11-06 00:56:31 UTC
+++ kitty/child.c
@@ -12,6 +12,7 @@
 #include <errno.h>
 #include <string.h>
 #include <signal.h>
+#include <sys/ioctl.h>
 
 static inline char**
 serialize_string_tuple(PyObject *src) {
@@ -87,10 +88,9 @@ spawn(PyObject *self UNUSED, PyObject *args) {
             // Establish the controlling terminal (see man 7 credentials)
             int tfd = open(name, O_RDWR);
             if (tfd == -1) exit_on_err("Failed to open controlling terminal");
-#ifdef TIOCSTTY
+
             // On BSD open() does not establish the controlling terminal
             if (ioctl(tfd, TIOCSCTTY, 0) == -1) exit_on_err("Failed to set controlling terminal with TIOCSCTTY");
-#endif
             close(tfd);
 
             // Redirect stdin/stdout/stderr to the pty
