--- source/cmake/Findsvthevc.cmake.orig	2020-06-06 07:11:33 UTC
+++ source/cmake/Findsvthevc.cmake
@@ -38,7 +38,7 @@ if(SVT_HEVC_INCLUDE_DIR)
         string(REGEX MATCH "SVT_VERSION_PATCHLEVEL  \\(([0-9]*)\\)" _ ${version})
         set(SVT_VERSION_PATCHLEVEL ${CMAKE_MATCH_1})
 
-        if(NOT ${SVT_VERSION_MAJOR} EQUAL "1" OR NOT ${SVT_VERSION_MINOR} EQUAL "4" OR NOT ${SVT_VERSION_PATCHLEVEL} EQUAL "1")
+        if(NOT ${SVT_VERSION_MAJOR} EQUAL "1" OR NOT ${SVT_VERSION_MINOR} EQUAL "4" OR NOT ${SVT_VERSION_PATCHLEVEL} GREATER_EQUAL "1")
             message (SEND_ERROR "-- Found SVT-HEVC Lib Version: ${SVT_VERSION_MAJOR}.${SVT_VERSION_MINOR}.${SVT_VERSION_PATCHLEVEL} which doesn't match the required version: ${SVT_VERSION_MAJOR_REQUIRED}.${SVT_VERSION_MINOR_REQUIRED}.${SVT_VERSION_PATCHLEVEL_REQUIRED}; Aborting configure  ")
         else()
             message(STATUS "-- Found SVT-HEVC Lib Version: ${SVT_VERSION_MAJOR}.${SVT_VERSION_MINOR}.${SVT_VERSION_PATCHLEVEL}")
