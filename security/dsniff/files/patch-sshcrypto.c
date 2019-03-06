$OpenBSD: patch-sshcrypto_c,v 1.3 2015/05/29 15:57:29 jca Exp $
--- sshcrypto.c.orig	2001-03-15 08:33:04 UTC
+++ sshcrypto.c
@@ -13,11 +13,13 @@
 #include "config.h"
 
 #include <sys/types.h>
+#include <openssl/blowfish.h>
 #include <openssl/ssl.h>
 
 #include <err.h>
 #include <stdio.h>
 #include <stdlib.h>
+#include <string.h>
 
 #include "sshcrypto.h"
 
@@ -26,10 +28,12 @@ struct blowfish_state {
 	u_char			iv[8];
 };
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 struct des3_state {
 	des_key_schedule	k1, k2, k3;
 	des_cblock		iv1, iv2, iv3;
 };
+#endif
 
 void
 rsa_public_encrypt(BIGNUM *out, BIGNUM *in, RSA *key)
@@ -37,10 +41,20 @@ rsa_public_encrypt(BIGNUM *out, BIGNUM *in, RSA *key)
 	u_char *inbuf, *outbuf;
 	int len, ilen, olen;
 
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	const BIGNUM *n, *e;
+	RSA_get0_key(key, &n, &e, NULL);
+	if (BN_num_bits(e) < 2 || !BN_is_odd(e))
+#else
 	if (BN_num_bits(key->e) < 2 || !BN_is_odd(key->e))
+#endif
 		errx(1, "rsa_public_encrypt() exponent too small or not odd");
 
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	olen = BN_num_bytes(n);
+#else
 	olen = BN_num_bytes(key->n);
+#endif
 	outbuf = malloc(olen);
 
 	ilen = BN_num_bytes(in);
@@ -69,7 +83,13 @@ rsa_private_decrypt(BIGNUM *out, BIGNUM *in, RSA *key)
 	u_char *inbuf, *outbuf;
 	int len, ilen, olen;
 
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+	const BIGNUM *n;
+	RSA_get0_key(key, &n, NULL, NULL);
+	olen = BN_num_bytes(n);
+#else
 	olen = BN_num_bytes(key->n);
+#endif
 	outbuf = malloc(olen);
 
 	ilen = BN_num_bytes(in);
@@ -144,6 +164,7 @@ blowfish_decrypt(u_char *src, u_char *dst, int len, vo
 	swap_bytes(dst, dst, len);
 }
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
 /* XXX - SSH1's weirdo 3DES... */
 void *
 des3_init(u_char *sesskey, int len)
@@ -192,3 +213,4 @@ des3_decrypt(u_char *src, u_char *dst, int len, void *
 	des_ncbc_encrypt(dst, dst, len, dstate->k2, &dstate->iv2, DES_ENCRYPT);
 	des_ncbc_encrypt(dst, dst, len, dstate->k1, &dstate->iv1, DES_DECRYPT);
 }
+#endif
