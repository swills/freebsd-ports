diff --git src/util/util.c src/util/util.c
index e3efa7fef..4ca677fe6 100644
--- src/util/util.c
+++ src/util/util.c
@@ -868,15 +868,13 @@ errno_t sss_utc_to_time_t(const char *str, const char *format, time_t *_unix_tim
         return EINVAL;
     }
 
-    ut = mktime(&tm);
+    ut = timegm(&tm);
     if (ut == -1) {
         DEBUG(SSSDBG_TRACE_INTERNAL,
-              "mktime failed to convert [%s].\n", str);
+              "timegm failed to convert [%s].\n", str);
         return EINVAL;
     }
 
-    tzset();
-    ut -= timezone;
     *_unix_time = ut;
     return EOK;
 }
