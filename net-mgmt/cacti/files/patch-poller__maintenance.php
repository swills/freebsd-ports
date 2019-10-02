--- poller_maintenance.php.orig	2019-10-02 05:42:56 UTC
+++ poller_maintenance.php
@@ -227,7 +227,7 @@ function logrotate_rotatenow() {
 	$logs = array();
 	$log = read_config_option('path_cactilog');
 	if (empty($log)) {
-		$log = $config['base_path'] . '/log/cacti.log';
+		$log = '/var/log/cacti/log';
 	}
 	$logs['Cacti'] = $log;
 
