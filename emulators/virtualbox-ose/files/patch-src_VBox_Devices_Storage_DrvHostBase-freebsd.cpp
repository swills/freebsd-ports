--- src/VBox/Devices/Storage/DrvHostBase-freebsd.cpp.orig	2019-01-25 18:18:40 UTC
+++ src/VBox/Devices/Storage/DrvHostBase-freebsd.cpp
@@ -24,6 +24,7 @@
 #include <sys/param.h>
 #include <errno.h>
 #include <stdio.h>
+#include <string.h>
 #include <cam/cam.h>
 #include <cam/cam_ccb.h>
 #include <cam/scsi/scsi_message.h>
@@ -31,7 +32,9 @@
 #include <VBox/err.h>
 
 #include <VBox/scsi.h>
+#include <iprt/file.h>
 #include <iprt/log.h>
+#include <iprt/string.h>
 
 
 /*********************************************************************************************************************************
@@ -164,6 +167,8 @@ DECLHIDDEN(int) drvHostBaseScsiCmdOs(PDRVHOSTBASE pThi
         else
             rc = RTErrConvertFromErrno(errno);
     }
+
+    return rc;
 }
 
 
