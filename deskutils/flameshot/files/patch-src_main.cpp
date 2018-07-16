--- src/main.cpp.orig	2018-02-24 11:19:04 UTC
+++ src/main.cpp
@@ -28,7 +28,7 @@
 #include <QTimer>
 #include <QDir>
 
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
 #include "src/core/flameshotdbusadapter.h"
 #include "src/utils/dbusutils.h"
 #include <QDBusMessage>
@@ -62,7 +62,7 @@ int main(int argc, char *argv[]) {
         app.setApplicationName("flameshot");
         app.setOrganizationName("Dharkael");
 
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
         auto c = Controller::getInstance();
         new FlameshotDBusAdapter(c);
         QDBusConnection dbus = QDBusConnection::sessionBus();
