--- lib/mega.h.orig	2018-07-22 23:40:40.000000000 +0200
+++ lib/mega.h	2018-07-25 10:45:38.692660000 +0200
@@ -118,7 +118,7 @@
 
 	gchar *node_handle;
 	gchar *node_name;
-	gsize node_size;
+	guint64 node_size;
 };
 
 #define MEGA_DEBUG_API 0x01
@@ -181,6 +181,7 @@
 gboolean mega_node_is_writable(struct mega_session *s, struct mega_node *n);
 
 gboolean mega_node_is_container(struct mega_node *n);
+gboolean mega_node_has_ancestor(struct mega_node *n, struct mega_node *ancestor);
 gchar *mega_node_get_link(struct mega_node *n, gboolean include_key);
 gchar *mega_node_get_key(struct mega_node *n);
 gboolean mega_node_get_path(struct mega_node *n, gchar *buf, gsize len);
