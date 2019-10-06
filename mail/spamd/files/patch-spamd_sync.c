--- spamd/sync.c.orig	2019-09-21 20:39:11 UTC
+++ spamd/sync.c
@@ -439,7 +439,11 @@ sync_update(time_t now, char *helo, char *ip, char *fr
 	u_int16_t sglen, fromlen, tolen, helolen, padlen;
 	char pad[SPAM_ALIGNBYTES];
 	int i = 0;
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_CTX ctx;
+#else
+	HMAC_CTX *ctx = HMAC_CTX_new();
+#endif
 	u_int hmac_len;
 
 	if (debug)
@@ -455,8 +459,12 @@ sync_update(time_t now, char *helo, char *ip, char *fr
 	tolen = strlen(to) + 1;
 	helolen = strlen(helo) + 1;
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_CTX_init(&ctx);
 	HMAC_Init(&ctx, sync_key, strlen(sync_key), EVP_sha1());
+#else
+	HMAC_Init_ex(ctx, sync_key, strlen(sync_key), EVP_sha1(), NULL);
+#endif
 
 	sglen = sizeof(sg) + fromlen + tolen + helolen;
 	padlen = SPAM_ALIGN(sglen) - sglen;
@@ -468,7 +476,11 @@ sync_update(time_t now, char *helo, char *ip, char *fr
 	hdr.sh_length = htons(sizeof(hdr) + sglen + padlen + sizeof(end));
 	iov[i].iov_base = &hdr;
 	iov[i].iov_len = sizeof(hdr);
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
 	/* Add single SPAM sync greylisting entry */
@@ -481,27 +493,47 @@ sync_update(time_t now, char *helo, char *ip, char *fr
 	sg.sg_helo_length = htons(helolen);
 	iov[i].iov_base = &sg;
 	iov[i].iov_len = sizeof(sg);
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
 	iov[i].iov_base = from;
 	iov[i].iov_len = fromlen;
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
 	iov[i].iov_base = to;
 	iov[i].iov_len = tolen;
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
 	iov[i].iov_base = helo;
 	iov[i].iov_len = helolen;
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
 	iov[i].iov_base = pad;
 	iov[i].iov_len = padlen;
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
 	/* Add end marker */
@@ -509,14 +541,26 @@ sync_update(time_t now, char *helo, char *ip, char *fr
 	end.st_length = htons(sizeof(end));
 	iov[i].iov_base = &end;
 	iov[i].iov_len = sizeof(end);
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Final(&ctx, hdr.sh_hmac, &hmac_len);
+#else
+	HMAC_Final(ctx, hdr.sh_hmac, &hmac_len);
+#endif
 
 	/* Send message to the target hosts */
 	sync_send(iov, i);
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_CTX_cleanup(&ctx);
+#else
+	HMAC_CTX_free(ctx);
+#endif
 }
 
 void
@@ -527,7 +571,11 @@ sync_addr(time_t now, time_t expire, char *ip, u_int16
 	struct spam_synctlv_addr sd;
 	struct spam_synctlv_hdr end;
 	int i = 0;
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_CTX ctx;
+#else
+	HMAC_CTX *ctx = HMAC_CTX_new();
+#endif
 	u_int hmac_len;
 
 	if (debug)
@@ -537,8 +585,12 @@ sync_addr(time_t now, time_t expire, char *ip, u_int16
 	bzero(&hdr, sizeof(hdr));
 	bzero(&sd, sizeof(sd));
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_CTX_init(&ctx);
 	HMAC_Init(&ctx, sync_key, strlen(sync_key), EVP_sha1());
+#else
+	HMAC_Init_ex(ctx, sync_key, strlen(sync_key), EVP_sha1(), NULL);
+#endif
 
 	/* Add SPAM sync packet header */
 	hdr.sh_version = SPAM_SYNC_VERSION;
@@ -547,7 +599,11 @@ sync_addr(time_t now, time_t expire, char *ip, u_int16
 	hdr.sh_length = htons(sizeof(hdr) + sizeof(sd) + sizeof(end));
 	iov[i].iov_base = &hdr;
 	iov[i].iov_len = sizeof(hdr);
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
 	/* Add single SPAM sync address entry */
@@ -558,7 +614,11 @@ sync_addr(time_t now, time_t expire, char *ip, u_int16
 	sd.sd_ip = inet_addr(ip);
 	iov[i].iov_base = &sd;
 	iov[i].iov_len = sizeof(sd);
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
 	/* Add end marker */
@@ -566,14 +626,26 @@ sync_addr(time_t now, time_t expire, char *ip, u_int16
 	end.st_length = htons(sizeof(end));
 	iov[i].iov_base = &end;
 	iov[i].iov_len = sizeof(end);
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Update(&ctx, iov[i].iov_base, iov[i].iov_len);
+#else
+	HMAC_Update(ctx, iov[i].iov_base, iov[i].iov_len);
+#endif
 	i++;
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_Final(&ctx, hdr.sh_hmac, &hmac_len);
+#else
+	HMAC_Final(ctx, hdr.sh_hmac, &hmac_len);
+#endif
 
 	/* Send message to the target hosts */
 	sync_send(iov, i);
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 	HMAC_CTX_cleanup(&ctx);
+#else
+	HMAC_CTX_free(ctx);
+#endif
 }
 
 void
