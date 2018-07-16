--- src/utils/pathinfo.cpp.orig	2018-06-30 22:49:58 UTC
+++ src/utils/pathinfo.cpp
@@ -24,7 +24,7 @@ QStringList PathInfo::translations() {
     QString binaryPath = QFileInfo(qApp->applicationFilePath())
             .absoluteFilePath();
     QString trPath = QDir::toNativeSeparators(binaryPath) + "translations";
-#if defined(Q_OS_LINUX)
+#if defined(Q_OS_LINUX) || defined(Q_OS_UNIX)
     return QStringList()
             << QString(APP_PREFIX) + "/share/flameshot/translations"
             << trPath
