--- miscutils/man.c	2019-07-01 13:32:04.145549000 +0200
+++ miscutils/man.c	2019-07-01 13:18:50.831992000 +0200
@@ -265,7 +265,7 @@
 	if (!man_path_list) {
 		/* default, may be overridden by /etc/man.conf */
 		man_path_list = xzalloc(2 * sizeof(man_path_list[0]));
-		man_path_list[0] = (char*)"/usr/man";
+		man_path_list[0] = (char*)"/usr/share/man";
 		/* count_mp stays 0.
 		 * Thus, man.conf will overwrite man_path_list[0]
 		 * if a path is defined there.
