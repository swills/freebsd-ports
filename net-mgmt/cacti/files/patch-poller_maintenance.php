--- poller_maintenance.php.orig	2020-11-30 18:19:51 UTC
+++ poller_maintenance.php
@@ -248,7 +248,7 @@ function logrotate_rotatenow() {
 	$logs = array();
 	$log = read_config_option('path_cactilog');
 	if (empty($log)) {
-		$log = $config['base_path'] . '/log/cacti.log';
+		$log = '/var/log/cacti/log';
 	}
 	$logs['Cacti'] = $log;
 
