--- webmitm.c.orig	2001-03-17 08:35:05 UTC
+++ webmitm.c
@@ -43,7 +43,7 @@ int	 http_fd, https_fd;
 int	 client_fd, server_fd;
 SSL_CTX	*ssl_client_ctx, *ssl_server_ctx;
 SSL	*ssl_client, *ssl_server;
-struct	 sockaddr_in csin, ssin;
+struct	 sockaddr_in ____________csin, ssin;
 int	 do_ssl, sig_pipe[2];
 in_addr_t	static_host = 0;
 
@@ -101,8 +101,8 @@ grep_passwords(char *buf, int len)
 	char obuf[1024];
 	
 	if ((len = decode_http(buf, len, obuf, sizeof(obuf))) > 0) {
-		record(csin.sin_addr.s_addr, ssin.sin_addr.s_addr,
-		       IPPROTO_TCP, ntohs(csin.sin_port), ntohs(ssin.sin_port),
+		record(____________csin.sin_addr.s_addr, ssin.sin_addr.s_addr,
+		       IPPROTO_TCP, ntohs(____________csin.sin_port), ntohs(ssin.sin_port),
 		       "http", obuf, len);
 	}
 }
@@ -242,7 +242,7 @@ server_init(char *buf, int size)
 			word = buf_tok(&msg, "/", 1);
 			vhost = buf_strdup(word);
 		}
-		ssin.sin_addr.s_addr = libnet_name_resolve(vhost, 1);
+		ssin.sin_addr.s_addr = libnet_name2addr4(NULL, vhost, 1);
 		free(vhost);
 		
 		if (ssin.sin_addr.s_addr == ntohl(INADDR_LOOPBACK) ||
@@ -355,7 +355,7 @@ mitm_child(void)
 	
 	if (Opt_debug)
 		warnx("new connection from %s.%d",
-		      inet_ntoa(csin.sin_addr), ntohs(csin.sin_port));
+		      inet_ntoa(____________csin.sin_addr), ntohs(____________csin.sin_port));
 
 	client_init();
 	
@@ -363,7 +363,7 @@ mitm_child(void)
 		err(1, "client_request");
 
 	if (Opt_debug)
-		warnx("%d bytes from %s", i, inet_ntoa(csin.sin_addr));
+		warnx("%d bytes from %s", i, inet_ntoa(____________csin.sin_addr));
 	
 	if (Opt_debug > 1)
 		write(STDERR_FILENO, buf, i);
@@ -393,7 +393,7 @@ mitm_child(void)
 			
 			if (Opt_debug)
 				warnx("%d bytes from %s",
-				      i, inet_ntoa(csin.sin_addr));
+				      i, inet_ntoa(____________csin.sin_addr));
 
 			if (Opt_debug > 1)
 				write(STDERR_FILENO, buf, i);
@@ -456,7 +456,7 @@ mitm_run(void)
 			if (errno != EINTR)
 				err(1, "select");
 		}
-		i = sizeof(csin);
+		i = sizeof(____________csin);
 		
 		if (FD_ISSET(sig_pipe[0], &fds)) {
 			while (read(sig_pipe[0], &i, 1) == 1)
@@ -466,11 +466,11 @@ mitm_run(void)
 			continue;
 		}
 		if (FD_ISSET(http_fd, &fds)) {
-			client_fd = accept(http_fd, (struct sockaddr *)&csin, &i);
+			client_fd = accept(http_fd, (struct sockaddr *)&____________csin, &i);
 			do_ssl = 0;
 		}
 		else if (FD_ISSET(https_fd, &fds)) {
-			client_fd = accept(https_fd, (struct sockaddr *)&csin, &i);
+			client_fd = accept(https_fd, (struct sockaddr *)&____________csin, &i);
 			do_ssl = 1;
 		}
 		else errx(1, "select failure");
@@ -510,7 +510,7 @@ main(int argc, char *argv[])
 	argv += optind;
 
 	if (argc == 1) {
-		if ((static_host = libnet_name_resolve(argv[0], 1)) == -1)
+		if ((static_host = libnet_name2addr4(NULL, argv[0], 1)) == -1)
 			usage();
 	}
 	else if (argc != 0) usage();
