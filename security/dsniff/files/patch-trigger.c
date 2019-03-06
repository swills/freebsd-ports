--- trigger.c.orig	2001-03-15 08:33:05 UTC
+++ trigger.c
@@ -276,7 +276,7 @@ trigger_dump(void)
 }
 	
 void
-trigger_ip(struct libnet_ip_hdr *ip)
+trigger_ip(struct libnet_ipv4_hdr *ip)
 {
 	struct trigger *t, tr;
 	u_char *buf;
@@ -305,7 +305,7 @@ trigger_ip(struct libnet_ip_hdr *ip)
 
 /* libnids needs a nids_register_udp()... */
 void
-trigger_udp(struct libnet_ip_hdr *ip)
+trigger_udp(struct libnet_ipv4_hdr *ip)
 {
 	struct trigger *t, tr;
 	struct libnet_udp_hdr *udp;
@@ -437,7 +437,7 @@ trigger_tcp(struct tcp_stream *ts, void **conn_save)
 }
 
 void
-trigger_tcp_raw(struct libnet_ip_hdr *ip)
+trigger_tcp_raw(struct libnet_ipv4_hdr *ip)
 {
 	struct trigger *t, tr;
 	struct libnet_tcp_hdr *tcp;
