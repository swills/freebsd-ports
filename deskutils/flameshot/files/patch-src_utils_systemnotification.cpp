--- src/utils/systemnotification.cpp.orig	2018-06-30 22:57:18 UTC
+++ src/utils/systemnotification.cpp
@@ -10,7 +10,7 @@
 #endif
 #include "src/core/controller.h"
 
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
 SystemNotification::SystemNotification(QObject *parent) : QObject(parent) {
     m_interface = new QDBusInterface(QStringLiteral("org.freedesktop.Notifications"),
                                      QStringLiteral("/org/freedesktop/Notifications"),
