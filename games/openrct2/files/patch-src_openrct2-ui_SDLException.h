--- src/openrct2-ui/SDLException.h.orig	2018-06-12 14:03:25 UTC
+++ src/openrct2-ui/SDLException.h
@@ -18,6 +18,7 @@
 
 #include <SDL2/SDL.h>
 #include <stdexcept>
+#include <string>
 
 /**
  * An exception which wraps an SDL error.
