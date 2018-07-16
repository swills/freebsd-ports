--- speech_tools/audio/nas.cc.orig	2017-09-04 15:54:03 UTC
+++ speech_tools/audio/nas.cc
@@ -57,6 +57,7 @@ static int nas_playing = 0;
 
 int nas_supported = TRUE;
 
+extern int endian_int;
 int endian_int = 1;
 #define NAS_BIG_ENDIAN (((char *)&endian_int)[0] == 0)
 
