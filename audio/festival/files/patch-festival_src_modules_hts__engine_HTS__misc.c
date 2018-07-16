--- festival/src/modules/hts_engine/HTS_misc.c.orig	2017-09-04 15:54:08 UTC
+++ festival/src/modules/hts_engine/HTS_misc.c
@@ -245,11 +245,7 @@ size_t HTS_ftell(HTS_File * fp)
    } else if (fp->type == HTS_FILE) {
       fpos_t pos;
       fgetpos((FILE *) fp->pointer, &pos);
-#if defined(_WIN32) || defined(__CYGWIN__) || defined(__APPLE__)
       return (size_t) pos;
-#else
-      return (size_t) pos.__pos;
-#endif                          /* _WIN32 || __APPLE__ */
    }
    HTS_error(0, "HTS_ftell: Unknown file type.\n");
    return 0;
