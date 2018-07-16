author:  Tod McQuillin

--- speech_tools/config/rules/install.mak.orig	2017-09-04 15:54:03 UTC
+++ speech_tools/config/rules/install.mak
@@ -39,7 +39,7 @@
 
 
 
-PROJECT_HOME_PATH := $(shell mkdir -p $($(PROJECT_PREFIX)_HOME); cd $($(PROJECT_PREFIX)_HOME); pwd)
+PROJECT_HOME_PATH := $($(PROJECT_PREFIX)_HOME)
 
 PROJECT_TOP_PATH := $(shell (cd $(TOP); pwd))
 
