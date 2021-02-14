--- m4/want_lua.m4.orig	2021-01-30 07:45:48 UTC
+++ m4/want_lua.m4
@@ -13,7 +13,7 @@ AC_DEFUN([DOVECOT_WANT_LUA],[
   AC_MSG_RESULT([$with_lua])
 
   AS_IF([test "x$with_lua" != "xno"],
-    [for LUAPC in lua5.3 lua-5.3 lua53 lua5.2 lua-5.2 lua52 lua5.1 lua-5.1 lua51 lua; do
+    [for LUAPC in lua5.4 lua-5.4 lua54 lua5.3 lua-5.3 lua53 lua5.2 lua-5.2 lua52 lua5.1 lua-5.1 lua51 lua; do
        PKG_CHECK_MODULES([LUA], $LUAPC >= 5.1, [
          AC_DEFINE([HAVE_LUA], [1], [Define to 1 if you have lua])
          with_lua=yes
