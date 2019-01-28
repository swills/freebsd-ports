--- src/polkitbackend/polkitbackendinteractiveauthority.c.orig	2018-06-22 22:20:18 UTC
+++ src/polkitbackend/polkitbackendinteractiveauthority.c
@@ -3031,7 +3031,44 @@ temporary_authorization_store_free (TemporaryAuthoriza
   g_free (store);
 }
 
+/* See the comment at the top of polkitunixprocess.c */
 static gboolean
+subject_equal_for_authz (PolkitSubject *a,
+                         PolkitSubject *b)
+{
+  if (!polkit_subject_equal (a, b))
+    return FALSE;
+
+  /* Now special case unix processes, as we want to protect against
+   * pid reuse by including the UID.
+   */
+  if (POLKIT_IS_UNIX_PROCESS (a) && POLKIT_IS_UNIX_PROCESS (b)) {
+    PolkitUnixProcess *ap = (PolkitUnixProcess*)a;
+    int uid_a = polkit_unix_process_get_uid ((PolkitUnixProcess*)a);
+    PolkitUnixProcess *bp = (PolkitUnixProcess*)b;
+    int uid_b = polkit_unix_process_get_uid ((PolkitUnixProcess*)b);
+
+    if (uid_a != -1 && uid_b != -1)
+      {
+        if (uid_a == uid_b)
+          {
+            return TRUE;
+          }
+        else
+          {
+            g_printerr ("denying slowfork; pid %d uid %d != %d!\n",
+                        polkit_unix_process_get_pid (ap),
+                        uid_a, uid_b);
+            return FALSE;
+          }
+      }
+    /* Fall through; one of the uids is unset so we can't reliably compare */
+  }
+
+  return TRUE;
+}
+
+static gboolean
 temporary_authorization_store_has_authorization (TemporaryAuthorizationStore *store,
                                                  PolkitSubject               *subject,
                                                  const gchar                 *action_id,
@@ -3073,7 +3110,7 @@ temporary_authorization_store_has_authorization (Tempo
     TemporaryAuthorization *authorization = l->data;
 
     if (strcmp (action_id, authorization->action_id) == 0 &&
-        polkit_subject_equal (subject_to_use, authorization->subject))
+        subject_equal_for_authz (subject_to_use, authorization->subject))
       {
         ret = TRUE;
         if (out_tmp_authz_id != NULL)
