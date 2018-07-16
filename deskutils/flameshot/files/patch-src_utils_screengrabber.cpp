--- src/utils/screengrabber.cpp.orig	2018-06-30 22:57:57 UTC
+++ src/utils/screengrabber.cpp
@@ -23,7 +23,7 @@
 #include <QApplication>
 #include <QDesktopWidget>
 
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
 #include <QDBusInterface>
 #include <QDBusReply>
 #include <QDir>
@@ -35,7 +35,7 @@ ScreenGrabber::ScreenGrabber(QObject *parent) : QObjec
 
 QPixmap ScreenGrabber::grabEntireDesktop(bool &ok) {
     ok = true;
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
     if(m_info.waylandDectected()) {
         QPixmap res;
         // handle screenshot based on DE
