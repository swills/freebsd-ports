--- tcp_raw.c.orig	2001-03-15 08:33:04 UTC
+++ tcp_raw.c
@@ -119,7 +119,7 @@ tcp_raw_reassemble(struct tcp_conn *conn, int minlen)
 }
 
 struct iovec *
-tcp_raw_input(struct libnet_ip_hdr *ip, struct libnet_tcp_hdr *tcp, int len)
+tcp_raw_input(struct libnet_ipv4_hdr *ip, struct libnet_tcp_hdr *tcp, int len)
 {
 	struct tha tha;
 	struct tcp_conn *conn;
@@ -131,7 +131,7 @@ tcp_raw_input(struct libnet_ip_hdr *ip, struct libnet_
 
 	/* Verify TCP checksum. */
 	cksum = tcp->th_sum;
-	libnet_do_checksum((u_char *) ip, IPPROTO_TCP, len);
+	libnet_do_checksum(NULL, (u_char *) ip, IPPROTO_TCP, len);
 
 	if (cksum != tcp->th_sum)
 		return (NULL);
