--- examples/ramysql/rasql.c.orig	2019-12-30 04:18:22 UTC
+++ examples/ramysql/rasql.c
@@ -1023,9 +1023,9 @@ RaSQLProcessQueue (struct ArgusQueueStruct *queue)
                                  int RaPort = ArgusParser->ArgusPortNum ?  ArgusParser->ArgusPortNum : ARGUS_DEFAULTPORT;
 
                                  if (RaRoleString != NULL)
-                                    sprintf (command, "/usr/local/bin/ra -nnS %s:%d%s/%s/%s -w %s", RaHost, RaPort, RaArchive, RaRoleString, file, filenamebuf);
+                                    sprintf (command, "%%PREFIX%%/bin/ra -nnS %s:%d%s/%s/%s -w %s", RaHost, RaPort, RaArchive, RaRoleString, file, filenamebuf);
                                  else
-                                    sprintf (command, "/usr/local/bin/ra -nnS %s:%d%s/%s -w %s", RaHost, RaPort, RaArchive, file, filenamebuf);
+                                    sprintf (command, "%%PREFIX%%/bin/ra -nnS %s:%d%s/%s -w %s", RaHost, RaPort, RaArchive, file, filenamebuf);
 #ifdef ARGUSDEBUG
                                  ArgusDebug (2, "RaSQLProcessQueue: remote file caching command  %s\n", command);
 #endif
