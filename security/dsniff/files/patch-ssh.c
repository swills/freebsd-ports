--- ssh.c.orig	2001-03-15 08:33:04 UTC
+++ ssh.c
@@ -232,6 +232,10 @@ SSH_accept(SSH *ssh)
 	u_char *p, cipher, cookie[8], msg[1024];
 	u_int32_t num;
 	int i;
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	const BIGNUM *servkey_e, *servkey_n;
+	const BIGNUM *hostkey_e, *hostkey_n;
+#endif
 	
 	/* Generate anti-spoofing cookie. */
 	RAND_bytes(cookie, sizeof(cookie));
@@ -241,11 +245,23 @@ SSH_accept(SSH *ssh)
 	*p++ = SSH_SMSG_PUBLIC_KEY;			/* type */
 	memcpy(p, cookie, 8); p += 8;			/* cookie */
 	num = 768; PUTLONG(num, p);			/* servkey bits */
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	RSA_get0_key(ssh->ctx->servkey, &servkey_n, &servkey_e, NULL);
+	put_bn(servkey_e, &p);				/* servkey exponent */
+	put_bn(servkey_n, &p);				/* servkey modulus */
+#else
 	put_bn(ssh->ctx->servkey->e, &p);		/* servkey exponent */
 	put_bn(ssh->ctx->servkey->n, &p);		/* servkey modulus */
+#endif
 	num = 1024; PUTLONG(num, p);			/* hostkey bits */
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	RSA_get0_key(ssh->ctx->hostkey, &hostkey_n, &hostkey_e, NULL);
+	put_bn(hostkey_e, &p);				/* hostkey exponent */
+	put_bn(hostkey_n, &p);				/* hostkey modulus */
+#else
 	put_bn(ssh->ctx->hostkey->e, &p);		/* hostkey exponent */
 	put_bn(ssh->ctx->hostkey->n, &p);		/* hostkey modulus */
+#endif
 	num = 0; PUTLONG(num, p);			/* protocol flags */
 	num = ssh->ctx->encmask; PUTLONG(num, p);	/* ciphers */
 	num = ssh->ctx->authmask; PUTLONG(num, p);	/* authmask */
@@ -296,7 +312,11 @@ SSH_accept(SSH *ssh)
 	SKIP(p, i, 4);
 
 	/* Decrypt session key. */
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	if (BN_cmp(servkey_n, hostkey_n) > 0) {
+#else
 	if (BN_cmp(ssh->ctx->servkey->n, ssh->ctx->hostkey->n) > 0) {
+#endif
 		rsa_private_decrypt(enckey, enckey, ssh->ctx->servkey);
 		rsa_private_decrypt(enckey, enckey, ssh->ctx->hostkey);
 	}
@@ -316,8 +336,13 @@ SSH_accept(SSH *ssh)
 	BN_clear_free(enckey);
 	
 	/* Derive real session key using session id. */
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	if ((p = ssh_session_id(cookie, hostkey_n,
+				servkey_n)) == NULL) {
+#else
 	if ((p = ssh_session_id(cookie, ssh->ctx->hostkey->n,
 				ssh->ctx->servkey->n)) == NULL) {
+#endif
 		warn("ssh_session_id");
 		return (-1);
 	}
@@ -326,10 +351,15 @@ SSH_accept(SSH *ssh)
 	}
 	/* Set cipher. */
 	if (cipher == SSH_CIPHER_3DES) {
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+		warnx("cipher 3des no longer supported");
+		return (-1);
+#else
 		ssh->estate = des3_init(ssh->sesskey, sizeof(ssh->sesskey));
 		ssh->dstate = des3_init(ssh->sesskey, sizeof(ssh->sesskey));
 		ssh->encrypt = des3_encrypt;
 		ssh->decrypt = des3_decrypt;
+#endif
 	}
 	else if (cipher == SSH_CIPHER_BLOWFISH) {
 		ssh->estate = blowfish_init(ssh->sesskey,sizeof(ssh->sesskey));
@@ -355,6 +385,10 @@ SSH_connect(SSH *ssh)
 	u_char *p, cipher, cookie[8], msg[1024];
 	u_int32_t num;
 	int i;
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	BIGNUM *servkey_n, *servkey_e;
+	BIGNUM *hostkey_n, *hostkey_e;
+#endif
 	
 	/* Get public key. */
 	if ((i = SSH_recv(ssh, pkt, sizeof(pkt))) <= 0) {
@@ -377,21 +411,43 @@ SSH_connect(SSH *ssh)
 
 	/* Get servkey. */
 	ssh->ctx->servkey = RSA_new();
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	servkey_n = BN_new();
+	servkey_e = BN_new();
+	RSA_set0_key(ssh->ctx->servkey, servkey_n, servkey_e, NULL);
+#else
 	ssh->ctx->servkey->n = BN_new();
 	ssh->ctx->servkey->e = BN_new();
+#endif
 
 	SKIP(p, i, 4);
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	get_bn(servkey_e, &p, &i);
+	get_bn(servkey_n, &p, &i);
+#else
 	get_bn(ssh->ctx->servkey->e, &p, &i);
 	get_bn(ssh->ctx->servkey->n, &p, &i);
+#endif
 
 	/* Get hostkey. */
 	ssh->ctx->hostkey = RSA_new();
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	hostkey_n = BN_new();
+	hostkey_e = BN_new();
+	RSA_set0_key(ssh->ctx->hostkey, hostkey_n, hostkey_e, NULL);
+#else
 	ssh->ctx->hostkey->n = BN_new();
 	ssh->ctx->hostkey->e = BN_new();
+#endif
 
 	SKIP(p, i, 4);
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	get_bn(hostkey_e, &p, &i);
+	get_bn(hostkey_n, &p, &i);
+#else
 	get_bn(ssh->ctx->hostkey->e, &p, &i);
 	get_bn(ssh->ctx->hostkey->n, &p, &i);
+#endif
 
 	/* Get cipher, auth masks. */
 	SKIP(p, i, 4);
@@ -403,8 +459,13 @@ SSH_connect(SSH *ssh)
 	RAND_bytes(ssh->sesskey, sizeof(ssh->sesskey));
 
 	/* Obfuscate with session id. */
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	if ((p = ssh_session_id(cookie, hostkey_n,
+				servkey_n)) == NULL) {
+#else
 	if ((p = ssh_session_id(cookie, ssh->ctx->hostkey->n,
 				ssh->ctx->servkey->n)) == NULL) {
+#endif
 		warn("ssh_session_id");
 		return (-1);
 	}
@@ -420,7 +481,11 @@ SSH_connect(SSH *ssh)
 		else BN_add_word(bn, ssh->sesskey[i]);
 	}
 	/* Encrypt session key. */
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	if (BN_cmp(servkey_n, hostkey_n) < 0) {
+#else
 	if (BN_cmp(ssh->ctx->servkey->n, ssh->ctx->hostkey->n) < 0) {
+#endif
 		rsa_public_encrypt(bn, bn, ssh->ctx->servkey);
 		rsa_public_encrypt(bn, bn, ssh->ctx->hostkey);
 	}
@@ -468,10 +533,15 @@ SSH_connect(SSH *ssh)
 		ssh->decrypt = blowfish_decrypt;
 	}
 	else if (cipher == SSH_CIPHER_3DES) {
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+		warnx("cipher 3des no longer supported");
+		return (-1);
+#else
 		ssh->estate = des3_init(ssh->sesskey, sizeof(ssh->sesskey));
 		ssh->dstate = des3_init(ssh->sesskey, sizeof(ssh->sesskey));
 		ssh->encrypt = des3_encrypt;
 		ssh->decrypt = des3_decrypt;
+#endif
 	}
 	/* Get server response. */
 	if ((i = SSH_recv(ssh, pkt, sizeof(pkt))) <= 0) {
