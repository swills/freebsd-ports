$NetBSD: patch-ag,v 1.1 2000/05/05 20:54:57 hubertf Exp $

--- speech_tools/config/modules/nas_audio.mak.orig	2017-09-04 15:54:03 UTC
+++ speech_tools/config/modules/nas_audio.mak
@@ -45,6 +45,6 @@ MOD_DESC_NAS_AUDIO=Use Network Audio
 AUDIO_DEFINES += -DSUPPORT_NAS
 AUDIO_INCLUDES += -I$(NAS_INCLUDE)
 MODULE_LIBS += -L$(NAS_LIB) -laudio 
-MODULE_EXTRA_LIBS += -L$(X11_LIB) -lX11 -lXt
+MODULE_EXTRA_LIBS += -L$(X11_LIB) -Wl,-R $(X11_LIB) -lX11 -lXt
 
 
