--- ./src/helper/Backend.cpp.ORIG	2017-12-05 17:00:16.000000000 +0100
+++ ./src/helper/Backend.cpp	2019-10-27 09:09:12.407454000 +0100
@@ -29,6 +29,10 @@
 #include <QtCore/QProcessEnvironment>
 
 #include <pwd.h>
+#if defined(Q_OS_FREEBSD)
+#include <sys/types.h>
+#include <login_cap.h>
+#endif /* defined(Q_OS_FREEBSD) */
 
 namespace SDDM {
     Backend::Backend(HelperApp* parent)
@@ -70,6 +74,19 @@
                         .arg(mainConfig.X11.UserAuthFile.get());
                 env.insert(QStringLiteral("XAUTHORITY"), value);
             }
+#if defined(Q_OS_FREEBSD)
+	    /* get additional environment variables via setclassenvironment();
+	       this needs to be done here instead of in UserSession::setupChildProcess
+	       as the environment for execve() is prepared here */
+	    login_cap_t *lc;
+
+	    if ((lc = login_getpwclass(pw)) != 0) {
+		setclassenvironment(lc, pw, 1);		/* path variables */
+		setclassenvironment(lc, pw, 0);		/* non-path variables */
+		/* copy all environment variables that are now set */
+		env.insert(QProcessEnvironment::systemEnvironment());
+	    }
+#endif /* defined(Q_OS_FREEBSD) */
             // TODO: I'm fairly sure this shouldn't be done for PAM sessions, investigate!
             m_app->session()->setProcessEnvironment(env);
         }
