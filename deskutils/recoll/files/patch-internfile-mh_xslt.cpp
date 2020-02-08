--- internfile/mh_xslt.cpp.orig	2020-01-11 15:49:52 UTC
+++ internfile/mh_xslt.cpp
@@ -16,7 +16,7 @@
  */
 #include "autoconfig.h"
 
-#include <malloc.h>
+#include <stdlib.h>
 
 #include <libxml/parser.h>
 #include <libxml/tree.h>
@@ -52,9 +52,6 @@ class FileScanXML : public FileScanDo { (public)
 			// malloc_trim() and mallopt() doc seems to be a bit
 			// misleading, there is probably a frag size under which
 			// free() does not try to malloc_trim() at all
-#ifndef _WIN32
-			malloc_trim(0);
-#endif
         }
     }
 
