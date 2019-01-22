--- src/data_mgmt/data_import.c.orig	2017-02-21 05:12:00.000000000 +0300
+++ src/data_mgmt/data_import.c	2018-11-18 17:45:45.425118000 +0300
@@ -372,7 +372,7 @@
 		goto out;
 	}
 
-	if ( EVP_PKEY_type( pKey->type ) != EVP_PKEY_RSA ) {
+	if ( EVP_PKEY_base_id( pKey ) != EVP_PKEY_RSA ) {
 		logError( TOKEN_RSA_KEY_ERROR );
 
 		X509_free( pX509 );
@@ -691,8 +691,16 @@
 
 	int  rc = -1;
 
-	int  nLen = BN_num_bytes( a_pRsa->n );
-	int  eLen = BN_num_bytes( a_pRsa->e );
+	const BIGNUM *rsa_n, *rsa_e;
+	
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
+	rsa_n = a_pRsa->n;
+	rsa_e = a_pRsa->e;
+#else
+	RSA_get0_key(a_pRsa, &rsa_n, &rsa_e, NULL);
+#endif
+	int  nLen = BN_num_bytes( rsa_n );
+	int  eLen = BN_num_bytes( rsa_e );
 
 	CK_RV  rv;
 
@@ -732,8 +740,8 @@
 	}
 
 	// Get binary representations of the RSA key information
-	BN_bn2bin( a_pRsa->n, n );
-	BN_bn2bin( a_pRsa->e, e );
+	BN_bn2bin( rsa_n, n );
+	BN_bn2bin( rsa_e, e );
 
 	// Create the RSA public key object
 	rv = createObject( a_hSession, tAttr, ulAttrCount, a_hObject );
@@ -760,15 +768,33 @@
 
 	int  rc = -1;
 
-	int  nLen = BN_num_bytes( a_pRsa->n );
-	int  eLen = BN_num_bytes( a_pRsa->e );
-	int  dLen = BN_num_bytes( a_pRsa->d );
-	int  pLen = BN_num_bytes( a_pRsa->p );
-	int  qLen = BN_num_bytes( a_pRsa->q );
-	int  dmp1Len = BN_num_bytes( a_pRsa->dmp1 );
-	int  dmq1Len = BN_num_bytes( a_pRsa->dmq1 );
-	int  iqmpLen = BN_num_bytes( a_pRsa->iqmp );
+	const BIGNUM *rsa_n, *rsa_e, *rsa_d;
+	const BIGNUM *rsa_p, *rsa_q;
+	const BIGNUM *rsa_dmp1, *rsa_dmq1, *rsa_iqmp;
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
+	rsa_n = a_pRsa->n;
+	rsa_e = a_pRsa->e;
+	rsa_d = a_pRsa->d;
+	rsa_p = a_pRsa->p;
+	rsa_q = a_pRsa->q;
+	rsa_dmp1 = a_pRsa->dmp1;
+	rsa_dmq1 = a_pRsa->dmq1;
+	rsa_iqmp = a_pRsa->iqmp;
+#else
+	RSA_get0_key(a_pRsa, &rsa_n, &rsa_e, &rsa_d);
+	RSA_get0_factors(a_pRsa, &rsa_p, &rsa_q);
+	RSA_get0_crt_params(a_pRsa, &rsa_dmp1, &rsa_dmq1, &rsa_iqmp);
+#endif
+	int  nLen = BN_num_bytes( rsa_n );
+	int  eLen = BN_num_bytes( rsa_e );
+	int  dLen = BN_num_bytes( rsa_d );
+	int  pLen = BN_num_bytes( rsa_p );
+	int  qLen = BN_num_bytes( rsa_q );
+	int  dmp1Len = BN_num_bytes( rsa_dmp1 );
+	int  dmq1Len = BN_num_bytes( rsa_dmq1 );
+	int  iqmpLen = BN_num_bytes( rsa_iqmp );
+
 	CK_RV  rv;
 
 	CK_BBOOL  bTrue  = TRUE;
@@ -821,14 +847,14 @@
 	}
 
 	// Get binary representations of the RSA key information
-	BN_bn2bin( a_pRsa->n, n );
-	BN_bn2bin( a_pRsa->e, e );
-	BN_bn2bin( a_pRsa->d, d );
-	BN_bn2bin( a_pRsa->p, p );
-	BN_bn2bin( a_pRsa->q, q );
-	BN_bn2bin( a_pRsa->dmp1, dmp1 );
-	BN_bn2bin( a_pRsa->dmq1, dmq1 );
-	BN_bn2bin( a_pRsa->iqmp, iqmp );
+	BN_bn2bin( rsa_n, n );
+	BN_bn2bin( rsa_e, e );
+	BN_bn2bin( rsa_d, d );
+	BN_bn2bin( rsa_p, p );
+	BN_bn2bin( rsa_q, q );
+	BN_bn2bin( rsa_dmp1, dmp1 );
+	BN_bn2bin( rsa_dmq1, dmq1 );
+	BN_bn2bin( rsa_iqmp, iqmp );
 
 	// Create the RSA private key object
 	rv = createObject( a_hSession, tAttr, ulAttrCount, a_hObject );
