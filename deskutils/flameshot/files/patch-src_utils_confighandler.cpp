--- src/utils/confighandler.cpp.orig	2018-06-30 22:56:46 UTC
+++ src/utils/confighandler.cpp
@@ -183,7 +183,7 @@ void ConfigHandler::setKeepOpenAppLauncher(const bool 
 
 bool ConfigHandler::startupLaunchValue() {
     bool res = false;
-#if defined(Q_OS_LINUX)
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
     QString path = QDir::homePath() + "/.config/autostart/Flameshot.desktop";
     res = QFile(path).exists();
 #elif defined(Q_OS_WIN)
@@ -197,7 +197,7 @@ bool ConfigHandler::startupLaunchValue() {
 }
 
 void ConfigHandler::setStartupLaunch(const bool start) {
-#if defined(Q_OS_LINUX)
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
     QString path = QDir::homePath() + "/.config/autostart/Flameshot.desktop";
     QFile file(path);
     if (start) {
