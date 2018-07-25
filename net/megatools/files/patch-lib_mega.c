--- lib/mega.c.orig	2018-07-22 23:41:55.000000000 +0200
+++ lib/mega.c	2018-07-25 10:45:41.692456000 +0200
@@ -3172,6 +3172,7 @@
 	GError *local_err = NULL;
 	gc_free gchar *url = NULL;
 	gc_string_free GString *response = NULL;
+	gc_free gchar* chksum = NULL;
 
 	tman_debug("W[%d]: started for chunk %d\n", worker->index, c->index);
 
@@ -3217,7 +3218,7 @@
 	}
 
 	// prepare URL including chunk offset
-	gc_free gchar* chksum = upload_checksum(buf, c->size);
+	chksum = upload_checksum(buf, c->size);
 	url = g_strdup_printf("%s/%" G_GOFFSET_FORMAT "?c=%s", t->upload_url, c->offset, chksum);
 
 	// perform upload POST
@@ -4639,6 +4640,26 @@
 }
 
 // }}}
+// {{{ mega_node_has_ancestor
+
+gboolean mega_node_has_ancestor(struct mega_node *n, struct mega_node *ancestor)
+{
+	g_return_val_if_fail(n != NULL, FALSE);
+	g_return_val_if_fail(ancestor != NULL, FALSE);
+
+	struct mega_node* it = n->parent;
+
+	while (it) {
+		if (it == ancestor)
+			return TRUE;
+
+		it = it->parent;
+	}
+
+	return FALSE;
+}
+
+// }}}
 
 // {{{ mega_session_save
 
