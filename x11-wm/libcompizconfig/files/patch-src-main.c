--- src/main.c.orig	2011-04-21 10:03:54 UTC
+++ src/main.c
@@ -27,7 +27,7 @@
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
-#include <malloc.h>
+#include <stdlib.h>
 #include <libintl.h>
 #include <dlfcn.h>
 #include <dirent.h>
@@ -598,7 +598,8 @@ openBackend (char *backend)
 	asprintf (&dlname, "%s/.compizconfig/backends/lib%s.so", 
 		  home, backend);
 	dlerror ();
-	dlhand = dlopen (dlname, RTLD_NOW | RTLD_NODELETE | RTLD_LOCAL);
+	dlhand = dlopen (dlname, RTLD_NOW | RTLD_LOCAL);
+	dlopen (dlname, RTLD_NOW | RTLD_LOCAL);
 	err = dlerror ();
     }
 
@@ -609,7 +610,8 @@ openBackend (char *backend)
         }
 	asprintf (&dlname, "%s/compizconfig/backends/lib%s.so", 
 		  LIBDIR, backend);
-	dlhand = dlopen (dlname, RTLD_NOW | RTLD_NODELETE | RTLD_LOCAL);
+	dlhand = dlopen (dlname, RTLD_NOW | RTLD_LOCAL);
+	dlopen (dlname, RTLD_NOW | RTLD_LOCAL);
 	err = dlerror ();
     }
 
