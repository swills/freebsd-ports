--- install/functions.php.orig	2020-11-30 18:19:50 UTC
+++ install/functions.php
@@ -690,7 +690,7 @@ function install_file_paths() {
 	}
 
 	if (empty($input['path_cactilog']['default'])) {
-		$input['path_cactilog']['default'] = $config['base_path'] . '/log/cacti.log';
+		$input['path_cactilog']['default'] = '/var/log/cacti/log';
 	}
 
 	/* stderr log file path */
