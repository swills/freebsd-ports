--- utils/oslogin_utils.cc.orig	2018-10-19 10:26:10.874150876 -0300
+++ utils/oslogin_utils.cc	2018-10-19 10:27:30.284777310 -0300
@@ -23,8 +23,7 @@
 #include <iostream>
 #include <sstream>
 
-#ifdef __GNUC__
-#if __GNUC__ > 4 || \
+#if defined(__clang__) || __GNUC__ > 4 || \
   (__GNUC__ == 4 && (__GNUC_MINOR__ > 9 || \
                      (__GNUC_MINOR__ == 9 && \
                       __GNUC_PATCHLEVEL__ > 0)))
@@ -34,7 +33,6 @@
 #include <boost/regex.hpp>
 #define Regex boost
 #endif
-#endif
 
 #include "oslogin_utils.h"
 
@@ -279,7 +277,7 @@
     }
   }
   if (strlen(result->pw_shell) == 0) {
-    if (!buf->AppendString("/bin/bash", &result->pw_shell, errnop)) {
+    if (!buf->AppendString("/bin/sh", &result->pw_shell, errnop)) {
       return false;
     }
   }
