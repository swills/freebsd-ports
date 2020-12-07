--- lib/functions.php.orig	2020-11-30 18:19:50 UTC
+++ lib/functions.php
@@ -866,7 +866,7 @@ function cacti_log_file() {
 	global $config;
 	$logfile        = read_config_option('path_cactilog');
 	if ($logfile == '') {
-		$logfile = $config['base_path'] . '/log/cacti.log';
+		$logfile = '/var/log/cacti/log';
 	}
 	$config['log_path'] = $logfile;
 	return $logfile;
