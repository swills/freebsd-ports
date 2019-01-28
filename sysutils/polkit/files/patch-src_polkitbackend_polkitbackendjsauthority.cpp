--- src/polkitbackend/polkitbackendjsauthority.cpp.orig	2018-04-03 20:57:57 UTC
+++ src/polkitbackend/polkitbackendjsauthority.cpp
@@ -1595,7 +1595,8 @@ utils_spawn_data_free (UtilsSpawnData *data)
                              (GSourceFunc) utils_child_watch_from_release_cb,
                              source,
                              (GDestroyNotify) g_source_destroy);
-      g_source_attach (source, data->main_context);
+      /* attach source to the global default main context */
+      g_source_attach (source, NULL);
       g_source_unref (source);
       data->child_pid = 0;
     }
