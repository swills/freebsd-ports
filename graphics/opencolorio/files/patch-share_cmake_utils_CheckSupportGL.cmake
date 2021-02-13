--- share/cmake/utils/CheckSupportGL.cmake.orig	2021-02-13 20:56:39 UTC
+++ share/cmake/utils/CheckSupportGL.cmake
@@ -12,7 +12,7 @@ if(OCIO_BUILD_GPU_TESTS OR OCIO_BUILD_APPS)
     set(OCIO_USE_GLVND OFF)
     set(OCIO_EGL_HEADLESS OFF)
 
-    find_package(OpenGL COMPONENTS OpenGL)
+    find_package(OpenGL REQUIRED COMPONENTS OpenGL)
     if(NOT OpenGL_OpenGL_FOUND AND NOT OPENGL_GLU_FOUND)
         package_root_message(OpenGL)
         set(OCIO_GL_ENABLED OFF)
