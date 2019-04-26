--- mdoc2man.awk.orig	2019-04-11 00:50:00 UTC
+++ mdoc2man.awk
@@ -113,6 +113,15 @@ function add(str) {
       add("''")
       if(!nospace&&match(words[w+1],"^[\\.,]"))
 	nospace=1
+    } else if(match(words[w],"^Qq$")) {
+      skip=1
+      add("\"")
+      add(words[++w])
+      while(w<nwords&&!match(words[w+1],"^[\\.,]"))
+	add(OFS words[++w])
+      add("\"")
+      if(!nospace&&match(words[w+1],"^[\\.,]"))
+	nospace=1
     } else if(match(words[w],"^Sq|Ql$")) {
       skip=1
       add("`" words[++w] "'")
