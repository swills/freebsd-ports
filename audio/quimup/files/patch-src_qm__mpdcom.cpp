--- src/qm_mpdcom.cpp.orig	2018-12-11 16:49:38.000000000 -0500
+++ src/qm_mpdcom.cpp	2019-03-09 20:14:42.938535000 -0500
@@ -367,16 +367,16 @@
     QFile file;
     QString line = "";
 
-    file.setFileName("/etc/default/mpd");
+    file.setFileName("/usr/local/etc/musicpd.conf");
     if ( !file.exists() )
     {
-        printf ("MPD's config : Tried /etc/default/mpd but it does not exist\n");
+        printf ("MPD's config : Tried /usr/local/etc/musicpd.conf but it does not exist\n");
         return line;
     }
 
     if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
     {
-        printf ("MPD's config : Tried /etc/default/mpd but it is not readable\n");
+        printf ("MPD's config : Tried /usr/local/etc/musicpd.conf but it is not readable\n");
         return line;
     }
 
@@ -393,10 +393,10 @@
     file.close();
 
     if (line.isEmpty())
-        printf ("MPD's config : Tried /etc/default/mpd but MPDCONF is not set\n");
+        printf ("MPD's config : Tried /usr/local/etc/musicpd.conf but MPDCONF is not set\n");
     else
     {
-        QString msg  = "MPD's config found in /etc/default/mpd : " + line + "\n";
+        QString msg  = "MPD's config found in /usr/local/etc/musicpd.conf : " + line + "\n";
         printf ("%s", msg.toUtf8().constData());
     }
 
@@ -2710,17 +2710,10 @@
     struct stat sts;
     bool b_isrunning = false;
 
-    // try pidof
-    if (stat("/bin/pidof", &sts) == 0)
-    {
-        if( system("pidof mpd > /dev/null") == 0)
-        b_isrunning = true;
-    }
-    else
     // try pgrep
-    if (stat("/usr/bin/pgrep", &sts) == 0)
+    if (stat("/bin/pgrep", &sts) == 0)
     {
-        if( system("pgrep mpd > /dev/null") == 0)
+        if( system("pgrep musicpd > /dev/null") == 0)
             b_isrunning = true;
     }
 
