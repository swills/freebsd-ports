--- ./src/helper/UserSession.cpp.ORIG	2019-10-27 09:01:43.058761000 +0100
+++ ./src/helper/UserSession.cpp	2019-10-27 09:05:06.270407000 +0100
@@ -32,6 +32,9 @@
 #include <grp.h>
 #include <unistd.h>
 #include <fcntl.h>
+#if defined(Q_OS_FREEBSD)
+#include <login_cap.h>
+#endif /* defined(Q_OS_FREEBSD) */
 
 namespace SDDM {
     UserSession::UserSession(HelperApp *parent)
@@ -110,6 +113,14 @@
 
         const QByteArray username = qobject_cast<HelperApp*>(parent())->user().toLocal8Bit();
         struct passwd *pw = getpwnam(username.constData());
+#if defined(Q_OS_FREEBSD)
+	/* execve() uses the environment prepared in Backend::openSession(),
+	   therefore environment variables which are set here are ignored. */
+	if (setusercontext(NULL, pw, pw->pw_uid, LOGIN_SETALL) != 0) {
+            qCritical() << "setusercontext(NULL, *, " << pw->pw_uid << ", LOGIN_SETALL) failed for user: " << username;
+            exit(Auth::HELPER_OTHER_ERROR);
+        }
+#else /* defined(Q_OS_FREEBSD) */
         if (setgid(pw->pw_gid) != 0) {
             qCritical() << "setgid(" << pw->pw_gid << ") failed for user: " << username;
             exit(Auth::HELPER_OTHER_ERROR);
@@ -122,6 +133,7 @@
             qCritical() << "setuid(" << pw->pw_uid << ") failed for user: " << username;
             exit(Auth::HELPER_OTHER_ERROR);
         }
+#endif /* defined(Q_OS_FREEBSD) */
         if (chdir(pw->pw_dir) != 0) {
             qCritical() << "chdir(" << pw->pw_dir << ") failed for user: " << username;
             qCritical() << "verify directory exist and has sufficient permissions";
