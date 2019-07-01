--- networking/httpd.c	2019-07-01 13:32:04.232259000 +0200
+++ networking/httpd.c	2019-07-01 11:30:19.074649000 +0200
@@ -2109,10 +2109,10 @@
 	}
 #if ENABLE_FEATURE_IPV6
 	if (fromAddr->u.sa.sa_family == AF_INET6
-	 && fromAddr->u.sin6.sin6_addr.s6_addr32[0] == 0
-	 && fromAddr->u.sin6.sin6_addr.s6_addr32[1] == 0
-	 && ntohl(fromAddr->u.sin6.sin6_addr.s6_addr32[2]) == 0xffff)
-		rmt_ip = ntohl(fromAddr->u.sin6.sin6_addr.s6_addr32[3]);
+	 && fromAddr->u.sin6.sin6_addr.s6_addr[0] == 0
+	 && fromAddr->u.sin6.sin6_addr.s6_addr[1] == 0
+	 && ntohl(fromAddr->u.sin6.sin6_addr.s6_addr[2]) == 0xffff)
+		rmt_ip = ntohl(fromAddr->u.sin6.sin6_addr.s6_addr[3]);
 #endif
 	if (ENABLE_FEATURE_HTTPD_CGI || DEBUG || verbose) {
 		/* NB: can be NULL (user runs httpd -i by hand?) */
