--- src/VBox/Devices/VMMDev/VMMDevHGCM.cpp.orig	2019-01-25 18:18:41 UTC
+++ src/VBox/Devices/VMMDev/VMMDevHGCM.cpp
@@ -2390,7 +2390,7 @@ void vmmdevHGCMDestroy(PVMMDEV pThis)
         RTCritSectDelete(&pThis->critsectHGCMCmdList);
     }
 
-    AssertCompile((uintptr_t)NIL_RTMEMCACHE == 0);
+    AssertCompile(NIL_RTMEMCACHE == (RTMEMCACHE)0);
     if (pThis->hHgcmCmdCache != NIL_RTMEMCACHE)
     {
         RTMemCacheDestroy(pThis->hHgcmCmdCache);
