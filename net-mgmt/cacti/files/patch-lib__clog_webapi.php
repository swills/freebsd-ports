--- lib/clog_webapi.php.orig	2020-11-30 18:19:50 UTC
+++ lib/clog_webapi.php
@@ -56,7 +56,7 @@ function clog_validate_filename(&$file, &$filepath, &$
 
 	$logfile = read_config_option('path_cactilog');
 	if ($logfile == '') {
-		$logfile = $config['base_path'] . '/log/cacti.log';
+		$logfile = '/var/log/cacti/log';
 	}
 
 	$errfile  = read_config_option('path_stderrlog');
