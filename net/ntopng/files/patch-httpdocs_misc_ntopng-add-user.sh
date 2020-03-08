--- httpdocs/misc/ntopng-add-user.sh.orig	2020-01-05 10:26:01 UTC
+++ httpdocs/misc/ntopng-add-user.sh
@@ -1,4 +1,4 @@
-#!/bin/bash
+#!%%LOCALBASE%%/bin/bash
 
 ###!/usr/bin/env BASH
 
@@ -111,7 +111,7 @@ function validate_username {
 
 function password_md5 {
     #make sure the md5 utility works as expected
-    local admin_md5=`echo -n admin | md5sum | cut -c 1-32`
+    local admin_md5=`echo -n admin | md5 | cut -c 1-32`
     if [[ $admin_md5 != "21232f297a57a5a743894a0e4a801fc3" ]]
     then
 	echo "md5sum not working as expected"
