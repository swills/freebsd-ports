--- lib/clog_webapi.php.orig	2019-10-02 05:42:03 UTC
+++ lib/clog_webapi.php
@@ -58,7 +58,7 @@ function clog_validate_filename(&$file, &$filepath, &$
 	$logbase = basename($logfile);
 
 	if ($logfile == '') {
-		$logfile = $config['base_path'] . '/log/cacti.log';
+		$logfile = '/var/log/cacti/log';
 	}
 
 	$errfile = read_config_option('path_stderrlog');
