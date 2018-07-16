--- src/core/controller.cpp.orig	2018-06-30 22:55:08 UTC
+++ src/core/controller.cpp
@@ -39,7 +39,7 @@ Controller::Controller() : m_captureWindow(nullptr)
     qApp->setQuitOnLastWindowClosed(false);
 
     // init tray icon
-#if defined(Q_OS_LINUX)
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
     if (!ConfigHandler().disabledTrayIconValue()) {
         enableTrayIcon();
     }
@@ -137,7 +137,7 @@ void Controller::enableTrayIcon() {
 }
 
 void Controller::disableTrayIcon() {
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
     if (m_trayIcon) {
         m_trayIcon->deleteLater();
     }
