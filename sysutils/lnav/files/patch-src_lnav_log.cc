--- src/lnav_log.cc.orig	2019-01-16 08:03:17.773038000 -0600
+++ src/lnav_log.cc	2019-01-16 08:03:29.539271000 -0600
@@ -255,7 +255,7 @@
         localtm.tm_sec,
         (int)(curr_time.tv_usec / 1000),
         LEVEL_NAMES[level],
-        basename((char *)src_file),
+        src_file,
         line_number);
     rc = vsnprintf(&line[prefix_size], MAX_LOG_LINE_SIZE - prefix_size,
         fmt, args);
