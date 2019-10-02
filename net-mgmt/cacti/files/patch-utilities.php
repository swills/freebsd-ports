--- utilities.php.orig	2019-10-02 05:43:04 UTC
+++ utilities.php
@@ -918,7 +918,7 @@ function utilities_view_logfile() {
 	}
 
 	if ($logfile == '') {
-		$logfile = $config['base_path'] . '/log/cacti.log';
+		$logfile = '/var/log/cacti/log';
 	}
 
 	if (get_nfilter_request_var('filename') != '') {
@@ -1244,7 +1244,7 @@ function utilities_clear_logfile() {
 	$logfile = read_config_option('path_cactilog');
 
 	if ($logfile == '') {
-		$logfile = './log/cacti.log';
+		$logfile = '/var/log/cacti/log';
 	}
 
 	html_start_box(__('Clear Cacti Log'), '100%', '', '3', 'center', '');
