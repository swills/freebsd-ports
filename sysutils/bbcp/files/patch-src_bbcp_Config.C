--- src/bbcp_Config.C.orig	2018-06-18 04:18:52 UTC
+++ src/bbcp_Config.C
@@ -265,7 +265,7 @@ void bbcp_Config::Arguments(int argc, char **argv, int
 
 // Process the options
 //
-   while (c=arglist.getopt())
+   while ((c=arglist.getopt()))
      { switch(c)
        {
        case 'a': Options |= bbcp_APPEND | bbcp_ORDER;
@@ -775,8 +775,8 @@ int bbcp_Config::ConfigInit(int argc, char **argv)
 
 // Use the config file, if present
 //
-   if (ConfigFN = getenv("bbcp_CONFIGFN"))
-      {if (retc = Configure(ConfigFN)) return retc;}
+   if ((ConfigFN = getenv("bbcp_CONFIGFN")))
+      {if ((retc = Configure(ConfigFN))) return retc;}
       else {
       // Use configuration file in the home directory, if any
       //
@@ -786,7 +786,7 @@ int bbcp_Config::ConfigInit(int argc, char **argv)
       strcpy(ConfigFN, homedir); strcat(ConfigFN, cfn);
       if (stat(ConfigFN, &buf))
          {retc = 0; free(ConfigFN); ConfigFN = 0;}
-         else if (retc = Configure(ConfigFN)) return retc;
+         else if ((retc = Configure(ConfigFN))) return retc;
      }
 
 // Establish the FD limit
@@ -1361,7 +1361,7 @@ int bbcp_Config::HostAndPort(const char *what, char *p
     if (*hn == ':' && hn++ && *hn)
        {errno = 0;
         pnum = strtol(hn, (char **)NULL, 10);
-        if (!pnum && errno || pnum > 65535)
+        if ((!pnum && errno) || pnum > 65535)
            {bbcp_Fmsg("Config",what,"port invalid -", hn); return -1;}
        }
 
