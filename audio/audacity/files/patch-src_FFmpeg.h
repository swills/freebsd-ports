--- src/FFmpeg.h.orig	2016-07-26 13:34:06 UTC
+++ src/FFmpeg.h
@@ -705,7 +705,7 @@
    FFMPEG_FUNCTION_WITH_RETURN(
       AVOutputFormat*,
       av_oformat_next,
-      (AVOutputFormat *f),
+      (const AVOutputFormat *f),
       (f)
    );
 #endif
@@ -786,7 +786,7 @@
    FFMPEG_FUNCTION_WITH_RETURN(
       int,
       av_fifo_size,
-      (AVFifoBuffer *f),
+      (const AVFifoBuffer *f),
       (f)
    );
 #endif
@@ -848,7 +848,7 @@
    FFMPEG_FUNCTION_WITH_RETURN(
       AVDictionaryEntry *,
       av_dict_get,
-      (AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags),
+      (const AVDictionary *m, const char *key, const AVDictionaryEntry *prev, int flags),
       (m, key, prev, flags)
    );
 #endif
