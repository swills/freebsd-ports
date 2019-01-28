--- src/polkit/polkitunixuser.c.orig	2017-09-04 19:52:53 UTC
+++ src/polkit/polkitunixuser.c
@@ -72,6 +72,7 @@ G_DEFINE_TYPE_WITH_CODE (PolkitUnixUser, polkit_unix_u
 static void
 polkit_unix_user_init (PolkitUnixUser *unix_user)
 {
+  unix_user->uid = -1;  /* (uid_t) -1 is not a valid UID under Linux */
   unix_user->name = NULL;
 }
 
@@ -112,11 +113,14 @@ polkit_unix_user_set_property (GObject      *object,
                                GParamSpec   *pspec)
 {
   PolkitUnixUser *unix_user = POLKIT_UNIX_USER (object);
+  gint val;
 
   switch (prop_id)
     {
     case PROP_UID:
-      unix_user->uid = g_value_get_int (value);
+      val = g_value_get_int (value);
+      g_return_if_fail (val != -1);
+      unix_user->uid = val;
       break;
 
     default:
@@ -144,9 +148,9 @@ polkit_unix_user_class_init (PolkitUnixUserClass *klas
                                    g_param_spec_int ("uid",
                                                      "User ID",
                                                      "The UNIX user ID",
-                                                     0,
+                                                     G_MININT,
                                                      G_MAXINT,
-                                                     0,
+                                                     -1,
                                                      G_PARAM_CONSTRUCT |
                                                      G_PARAM_READWRITE |
                                                      G_PARAM_STATIC_NAME |
@@ -182,6 +186,7 @@ polkit_unix_user_set_uid (PolkitUnixUser *user,
                           gint uid)
 {
   g_return_if_fail (POLKIT_IS_UNIX_USER (user));
+  g_return_if_fail (uid != -1);
   user->uid = uid;
 }
 
@@ -196,6 +201,8 @@ polkit_unix_user_set_uid (PolkitUnixUser *user,
 PolkitIdentity *
 polkit_unix_user_new (gint uid)
 {
+  g_return_val_if_fail (uid != -1, NULL);
+
   return POLKIT_IDENTITY (g_object_new (POLKIT_TYPE_UNIX_USER,
                                         "uid", uid,
                                         NULL));
