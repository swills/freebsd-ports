--- libpcap/pcap.c.orig	2015-05-02 05:24:47.000000000 +0900
+++ libpcap/pcap.c	2018-04-01 17:30:32.523148000 +0900
@@ -1384,7 +1384,7 @@
 #endif
 
 void
-pcap_perror(pcap_t *p, char *prefix)
+pcap_perror(pcap_t *p, const char *prefix)
 {
 	fprintf(stderr, "%s: %s\n", prefix, p->errbuf);
 }
