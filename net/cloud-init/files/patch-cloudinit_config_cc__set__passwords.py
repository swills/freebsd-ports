--- cloudinit/config/cc_set_passwords.py.orig	2019-07-17 16:30:07 UTC
+++ cloudinit/config/cc_set_passwords.py
@@ -153,71 +153,31 @@ def handle(_name, cfg, cloud, log, args):
         else:
             log.warn("No default or defined user to change password for.")
 
-    errors = []
+    random_msg = (
+        "Set the following 'random' password:\n"
+        "  '%s' to %s")
+
     if plist:
-        plist_in = []
-        hashed_plist_in = []
-        hashed_users = []
-        randlist = []
         users = []
         prog = re.compile(r'\$(1|2a|2y|5|6)(\$.+){2}')
         for line in plist:
             u, p = line.split(':', 1)
+            log.debug("Setting password for: %s" % u)
             if prog.match(p) is not None and ":" not in p:
-                hashed_plist_in.append("%s:%s" % (u, p))
-                hashed_users.append(u)
-            else:
-                if p == "R" or p == "RANDOM":
+                cloud.distro.set_passwd(u, p, hashed=True)
+            elif p == "R" or p == "RANDOM":
                     p = rand_user_password()
-                    randlist.append("%s:%s" % (u, p))
-                plist_in.append("%s:%s" % (u, p))
-                users.append(u)
+                    sys.stderr.write(random_msg % (p, u))
+                    cloud.distro.set_passwd(u, p)
+            else:
+                cloud.distro.set_passwd(u, p)
 
-        ch_in = '\n'.join(plist_in) + '\n'
-        if users:
-            try:
-                log.debug("Changing password for %s:", users)
-                util.subp(['chpasswd'], ch_in)
-            except Exception as e:
-                errors.append(e)
-                util.logexc(
-                    log, "Failed to set passwords with chpasswd for %s", users)
+            if expire:
+                cloud.distro.force_passwd_change(u)
 
-        hashed_ch_in = '\n'.join(hashed_plist_in) + '\n'
-        if hashed_users:
-            try:
-                log.debug("Setting hashed password for %s:", hashed_users)
-                util.subp(['chpasswd', '-e'], hashed_ch_in)
-            except Exception as e:
-                errors.append(e)
-                util.logexc(
-                    log, "Failed to set hashed passwords with chpasswd for %s",
-                    hashed_users)
-
-        if len(randlist):
-            blurb = ("Set the following 'random' passwords\n",
-                     '\n'.join(randlist))
-            sys.stderr.write("%s\n%s\n" % blurb)
-
-        if expire:
-            expired_users = []
-            for u in users:
-                try:
-                    util.subp(['passwd', '--expire', u])
-                    expired_users.append(u)
-                except Exception as e:
-                    errors.append(e)
-                    util.logexc(log, "Failed to set 'expire' for %s", u)
-            if expired_users:
-                log.debug("Expired passwords for: %s users", expired_users)
-
     handle_ssh_pwauth(
         cfg.get('ssh_pwauth'), service_cmd=cloud.distro.init_cmd,
         service_name=cloud.distro.get_option('ssh_svcname', 'ssh'))
-
-    if len(errors):
-        log.debug("%s errors occured, re-raising the last one", len(errors))
-        raise errors[-1]
 
 
 def rand_user_password(pwlen=9):
