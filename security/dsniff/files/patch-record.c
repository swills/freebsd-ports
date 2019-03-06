--- record.c.orig	2001-03-15 08:33:04 UTC
+++ record.c
@@ -65,8 +65,8 @@ record_print(struct rec *rec)
 	tm = localtime(&rec->time);
 	strftime(tstr, sizeof(tstr), "%x %X", tm);
 	
-	srcp = libnet_host_lookup(rec->src, Opt_dns);
-	dstp = libnet_host_lookup(rec->dst, Opt_dns);
+	srcp = libnet_addr2name4(rec->src, Opt_dns);
+	dstp = libnet_addr2name4(rec->dst, Opt_dns);
 
 	if ((pr = getprotobynumber(rec->proto)) == NULL)
 		protop = "unknown";
