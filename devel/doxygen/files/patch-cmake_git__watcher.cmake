Patch from https://github.com/doxygen/doxygen/pull/7291

--- cmake/git_watcher.cmake.orig	2019-07-30 13:10:10 UTC
+++ cmake/git_watcher.cmake
@@ -69,7 +69,7 @@ CHECK_OPTIONAL_VARIABLE(GIT_WORKING_DIR "${CMAKE_SOURC
 # Check the optional git variable.
 # If it's not set, we'll try to find it using the CMake packaging system.
 if(NOT DEFINED GIT_EXECUTABLE)
-    find_package(Git QUIET REQUIRED)
+    find_package(Git QUIET)
 endif()
 CHECK_REQUIRED_VARIABLE(GIT_EXECUTABLE)
 
