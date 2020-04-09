Commit c1428689: ban log: only log once when adding, not when
increasing score when already banned

https://gitlab.com/openconnect/ocserv/-/commit/c142868909490e65acea22add83ff4e6237fb63a

--- src/main-ban.c.orig	2020-03-24 20:04:58 UTC
+++ src/main-ban.c
@@ -155,9 +155,9 @@ int add_ip_to_ban_list(main_server_st *s
 	 * periodically polls the server */
 	if (e->score < GETCONFIG(s)->max_ban_score) {
 		e->expires = expiration;
-		print_msg = 0;
-	} else
 		print_msg = 1;
+	} else
+		print_msg = 0;
 
 	/* prevent overflow */
 	e->score = (e->score + score) > e->score ? (e->score + score) : (e->score);
