--- src/bbcp_System.C.orig	2018-06-18 04:51:20 UTC
+++ src/bbcp_System.C
@@ -108,7 +108,7 @@ gid_t bbcp_System::getGID(const char *group)
 // Convert the group name to a gid
 //
    Glookup.Lock();
-   if (gp = getgrnam(group)) gid = gp->gr_gid;
+   if ((gp = getgrnam(group))) gid = gp->gr_gid;
       else gid = (gid_t)-1;
    Glookup.UnLock();
    return gid;
@@ -126,7 +126,7 @@ char *bbcp_System::getGNM(gid_t gid)
 // Get the group name
 //
    Glookup.Lock();
-   if (gp = getgrgid(gid)) gnmp = gp->gr_name;
+   if ((gp = getgrgid(gid))) gnmp = gp->gr_name;
       else gnmp = (char *)"nogroup";
    Glookup.UnLock();
 
@@ -151,7 +151,7 @@ char *bbcp_System::getHomeDir()
 
 // Get the password entry for this uid
 //
-   if (pwp = getpwuid(myuid)) homedir = pwp->pw_dir;
+   if ((pwp = getpwuid(myuid))) homedir = pwp->pw_dir;
       else homedir = (char *)"/tmp";
 
 // Return a copy of the directory
@@ -170,7 +170,7 @@ pid_t bbcp_System::getGrandP()
     int rc, grandpa;
 
     sprintf(cmd, PS_CMD, getppid());
-    if (rc = cmdstream.Exec(cmd)) rc = cmdstream.LastError();
+    if ((rc = cmdstream.Exec(cmd))) rc = cmdstream.LastError();
        else if (!cmdstream.GetLine() || !(lp = cmdstream.GetLine())) rc = -33;
                else {errno = 0;
                      grandpa = strtol(lp, (char **)NULL, 10);
@@ -218,7 +218,7 @@ char *bbcp_System::UserName()
 
 // Get the password entry for this uid
 //
-   if (pwp = getpwuid(myuid)) uname = pwp->pw_name;
+   if ((pwp = getpwuid(myuid))) uname = pwp->pw_name;
       else uname = (char *)"anonymous";
 
 // Return a copy of the directory
