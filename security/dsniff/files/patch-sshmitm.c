--- sshmitm.c.orig	2001-03-15 08:33:04 UTC
+++ sshmitm.c
@@ -41,7 +41,7 @@ int	 mitm_fd;
 int	 client_fd, server_fd;
 SSH_CTX	*ssh_client_ctx, *ssh_server_ctx;
 SSH	*ssh_client, *ssh_server;
-struct	 sockaddr_in csin, ssin;
+struct	 sockaddr_in ____________csin, ssin;
 int	 sig_pipe[2];
 
 static void
@@ -148,7 +148,7 @@ mitm_child(void)
 	
 	if (Opt_debug)
 		warnx("new connection from %s.%d",
-		      inet_ntoa(csin.sin_addr), ntohs(csin.sin_port));
+		      inet_ntoa(____________csin.sin_addr), ntohs(____________csin.sin_port));
 	
 	if (fcntl(client_fd, F_SETFL, 0) == -1)
 		err(1, "fcntl");
@@ -237,10 +237,10 @@ mitm_child(void)
 				}
 				else {
 					pass_done = 1;
-					record(csin.sin_addr.s_addr,
+					record(____________csin.sin_addr.s_addr,
 					       ssin.sin_addr.s_addr,
 					       IPPROTO_TCP,
-					       ntohs(csin.sin_port),
+					       ntohs(____________csin.sin_port),
 					       ntohs(ssin.sin_port), "ssh",
 					       userpass, strlen(userpass));
 				}
@@ -326,7 +326,7 @@ mitm_run(void)
 			if (errno != EINTR)
 				err(1, "select");
 		}
-		i = sizeof(csin);
+		i = sizeof(____________csin);
 		
 		if (FD_ISSET(sig_pipe[0], &fds)) {
 			while (read(sig_pipe[0], buf, 1) == 1)
@@ -336,7 +336,7 @@ mitm_run(void)
 		}
 		if (FD_ISSET(mitm_fd, &fds)) {
 			client_fd = accept(mitm_fd,
-					   (struct sockaddr *)&csin, &i);
+					   (struct sockaddr *)&____________csin, &i);
 
 			if (client_fd >= 0) {
 				if (fork() == 0) {
@@ -389,7 +389,7 @@ main(int argc, char *argv[])
 	if (argc < 1)
 		usage();
 	
-	if ((ip = libnet_name_resolve(argv[0], 1)) == -1)
+	if ((ip = libnet_name2addr4(NULL, argv[0], LIBNET_RESOLVE)) == -1)
 		usage();
 
 	if (argc == 2 && (rport = atoi(argv[1])) == 0)
