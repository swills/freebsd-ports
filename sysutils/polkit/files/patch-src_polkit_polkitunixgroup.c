--- src/polkit/polkitunixgroup.c.orig	2017-09-04 19:52:53 UTC
+++ src/polkit/polkitunixgroup.c
@@ -71,6 +71,7 @@ G_DEFINE_TYPE_WITH_CODE (PolkitUnixGroup, polkit_unix_
 static void
 polkit_unix_group_init (PolkitUnixGroup *unix_group)
 {
+  unix_group->gid = -1; /* (git_t) -1 is not a valid GID under Linux */
 }
 
 static void
@@ -100,11 +101,14 @@ polkit_unix_group_set_property (GObject      *object,
                                GParamSpec   *pspec)
 {
   PolkitUnixGroup *unix_group = POLKIT_UNIX_GROUP (object);
+  gint val;
 
   switch (prop_id)
     {
     case PROP_GID:
-      unix_group->gid = g_value_get_int (value);
+      val = g_value_get_int (value);
+      g_return_if_fail (val != -1);
+      unix_group->gid = val;
       break;
 
     default:
@@ -131,9 +135,9 @@ polkit_unix_group_class_init (PolkitUnixGroupClass *kl
                                    g_param_spec_int ("gid",
                                                      "Group ID",
                                                      "The UNIX group ID",
-                                                     0,
+                                                     G_MININT,
                                                      G_MAXINT,
-                                                     0,
+                                                     -1,
                                                      G_PARAM_CONSTRUCT |
                                                      G_PARAM_READWRITE |
                                                      G_PARAM_STATIC_NAME |
@@ -166,9 +170,10 @@ polkit_unix_group_get_gid (PolkitUnixGroup *group)
  */
 void
 polkit_unix_group_set_gid (PolkitUnixGroup *group,
-                          gint gid)
+                           gint gid)
 {
   g_return_if_fail (POLKIT_IS_UNIX_GROUP (group));
+  g_return_if_fail (gid != -1);
   group->gid = gid;
 }
 
@@ -183,6 +188,8 @@ polkit_unix_group_set_gid (PolkitUnixGroup *group,
 PolkitIdentity *
 polkit_unix_group_new (gint gid)
 {
+  g_return_val_if_fail (gid != -1, NULL);
+
   return POLKIT_IDENTITY (g_object_new (POLKIT_TYPE_UNIX_GROUP,
                                        "gid", gid,
                                        NULL));
