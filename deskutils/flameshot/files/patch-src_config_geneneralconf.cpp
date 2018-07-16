--- src/config/geneneralconf.cpp.orig	2018-06-30 22:54:22 UTC
+++ src/config/geneneralconf.cpp
@@ -48,7 +48,7 @@ void GeneneralConf::updateComponents() {
     m_sysNotifications->setChecked(config.desktopNotificationValue());
     m_autostart->setChecked(config.startupLaunchValue());
 
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
     m_showTray->setChecked(!config.disabledTrayIconValue());
 #endif
 }
@@ -145,7 +145,7 @@ void GeneneralConf::initShowDesktopNotification() {
 }
 
 void GeneneralConf::initShowTrayIcon() {
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
     m_showTray = new QCheckBox(tr("Show tray icon"), this);
     ConfigHandler config;
     bool checked = !config.disabledTrayIconValue();
