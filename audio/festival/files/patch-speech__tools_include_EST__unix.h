$NetBSD: patch-ae,v 1.2 1999/10/11 14:13:49 proff Exp $

--- speech_tools/include/EST_unix.h.orig	2017-09-04 15:54:03 UTC
+++ speech_tools/include/EST_unix.h
@@ -53,6 +53,7 @@
 #   include <sys/wait.h>
 #   include <sys/resource.h>
 #   include <dirent.h>
+#   define unix 1
 #elif defined(SYSTEM_IS_WIN32)
 #   include <io.h>
 #   include "win32/EST_unix_win32.h"
