--- lib/cache/cdb_lmdb.c.orig	2020-02-05 10:35:04.000000000 -0500
+++ lib/cache/cdb_lmdb.c	2020-02-05 10:35:04.000000000 -0500
@@ -345,7 +345,12 @@
 	}
 
 	ret = posix_fallocate(fd, 0, mapsize);
-	if (ret != 0) {
+	if (ret == EINVAL) {
+		/* POSIX says this can happen when the feature isn't supported by the FS.
+		 * We haven't seen this happen on Linux+glibc but it was reported on FreeBSD.*/
+		kr_log_info("[cache] space pre-allocation failed and ignored; "
+				"your (file)system probably doesn't support it.\n");
+	} else if (ret != 0) {
 		mdb_txn_abort(txn);
 		stats->close++;
 		mdb_env_close(env->env);
