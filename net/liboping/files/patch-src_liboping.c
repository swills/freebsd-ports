--- src/liboping.c.orig	2020-05-29 20:17:55.814776000 -0700
+++ src/liboping.c	2020-05-29 20:19:49.588497000 -0700
@@ -801,6 +801,11 @@
 		if (errno == ENETUNREACH)
 			return (0);
 #endif
+	/* BSDs return EHOSTDOWN on ARP/ND failure */
+#if defined(EHOSTDOWN)
+		if (errno == EHOSTDOWN)
+			return (0);
+#endif
 		ping_set_errno (obj, errno);
 	}
 
