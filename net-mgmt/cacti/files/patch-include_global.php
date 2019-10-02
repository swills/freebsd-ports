--- include/global.php.orig	2019-10-02 05:40:32 UTC
+++ include/global.php
@@ -225,7 +225,7 @@ if ($config['cacti_server_os'] == 'win32') {
 	$config['library_path'] = preg_replace("/(.*[\/])include/", "\\1lib", dirname(__FILE__));
 }
 $config['include_path'] = dirname(__FILE__);
-$config['rra_path'] = $config['base_path'] . '/rra';
+$config['rra_path'] = '/var/db/cacti/rra';
 
 /* for multiple pollers, we need to know this location */
 if (!isset($scripts_path)) {
