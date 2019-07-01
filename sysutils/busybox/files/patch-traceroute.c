--- /usr/ports/sysutils/busybox/work/busybox-1.30.1/networking/traceroute.c	2019-07-01 13:32:04.218068000 +0200
+++ busybox-1.30.1/networking/traceroute.c	2019-07-01 12:53:06.580103000 +0200
@@ -635,7 +635,7 @@
 // but defer it to kernel, we can't set source port,
 // and thus can't check it here in the reply
 			/* && up->source == htons(ident) */
-			 && up->dest == htons(port + seq)
+			 && up->uh_dport == htons(port + seq)
 			) {
 				return (type == ICMP_TIMXCEED ? -1 : code + 1);
 			}
@@ -933,7 +933,7 @@
 
 #if ENABLE_TRACEROUTE6
 	if (af == AF_INET6) {
-		if (setsockopt_int(rcvsock, SOL_RAW, IPV6_CHECKSUM, 2) != 0)
+		if (setsockopt_int(rcvsock, SOL_IPV6, IPV6_CHECKSUM, 2) != 0)
 			bb_perror_msg_and_die("setsockopt(%s)", "IPV6_CHECKSUM");
 		xmove_fd(xsocket(af, SOCK_DGRAM, 0), sndsock);
 	} else
