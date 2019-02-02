diff -u src/main.c src/main.c
--- src/main.c	2017-03-27 12:11:23.000000000 -0400
+++ src/main.c	2019-02-02 19:07:36.596835000 -0400
@@ -9,6 +9,8 @@
 #include <stdlib.h>
 #include <string.h>
 #include <libgen.h>
+#include <limits.h>	/* for NAME_MAX, max bytes in a file name */
+#include <assert.h>	/* for assert() macro */
 
 #include "sha1.h"
 
@@ -23,7 +25,9 @@
 
 	if (argc < 2)
 	{
-		printf("Usage: %s <file>\n", basename(argv[0]));
+assert (sizeof(buffer) >= NAME_MAX); /* reuse buffer[] for newly-POSIX-compliant, thread-safe basename() */
+		(void) strlcpy (buffer, argv[0], sizeof (buffer));
+		printf("Usage: %s <file>\n", basename(buffer));
 		return 1;
 	}
 
