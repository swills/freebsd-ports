--- include/global_settings.php.orig	2019-10-02 05:40:09 UTC
+++ include/global_settings.php
@@ -160,10 +160,10 @@ $settings = array(
 			),
 		'path_cactilog' => array(
 			'friendly_name' => __('Cacti Log Path'),
-			'description' => __('The path to your Cacti log file (if blank, defaults to &lt;path_cacti&gt;/log/cacti.log)'),
+			'description' => __('The path to your Cacti log file (if blank, defaults to /var/log/cacti/log)'),
 			'method' => 'filepath',
 			'file_type' => 'ascii',
-			'default' => $config['base_path'] . '/log/cacti.log',
+			'default' => '/var/log/cacti/log',
 			'max_length' => '255',
 			'install_check' => 'writable',
 			'install_blank' => true
