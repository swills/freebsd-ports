--- php_memcached.c.orig	2019-10-06 16:04:32 UTC
+++ php_memcached.c
@@ -3234,7 +3234,7 @@ static PHP_METHOD(Memcached, setOptions)
 	zval *options;
 	zend_bool ok = 1;
 	zend_string *key;
-	ulong key_index;
+	long key_index;
 	zval *value;
 
 	MEMC_METHOD_INIT_VARS;
