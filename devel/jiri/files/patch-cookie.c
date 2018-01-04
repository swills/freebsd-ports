--- go/src/fuchsia.googlesource.com/jiri/vendor/github.com/libgit2/git2go/vendor/libgit2/src/transports/cookie.c.orig	2017-11-25 07:11:08 UTC
+++ go/src/fuchsia.googlesource.com/jiri/vendor/github.com/libgit2/git2go/vendor/libgit2/src/transports/cookie.c
@@ -23,6 +23,11 @@
 #include <string.h>
 #include <arpa/inet.h>
 
+#ifndef _WIN32
+#  include <netinet/in.h>
+#  include <sys/socket.h>
+#endif
+
 #define ISBLANK(x)  (int)((((unsigned char)x) == ' ') || \
 			  (((unsigned char)x) == '\t'))
 /*
