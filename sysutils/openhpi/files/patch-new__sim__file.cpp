--- plugins/dynamic_simulator/new_sim_file.cpp.orig	2018-09-02 00:24:02 UTC
+++ plugins/dynamic_simulator/new_sim_file.cpp
@@ -44,9 +44,9 @@
 ///< Global skip characters for oh_scanner_config
 static gchar skip_characters[] = " \t\n";  
 ///< Global identifier_first for oh_scanner_config
-static gchar identifier_first[] = G_CSET_a_2_z"_/."G_CSET_A_2_Z; 
+static gchar identifier_first[] = G_CSET_a_2_z"_/." G_CSET_A_2_Z; 
 ///< Global identifier_nth for oh_scanner_config
-static gchar identifier_nth[] = G_CSET_a_2_z"_-0123456789/."G_CSET_A_2_Z;
+static gchar identifier_nth[] = G_CSET_a_2_z"_-0123456789/." G_CSET_A_2_Z;
 ///< Global comment signs for oh_scanner_config
 static gchar comment_single[] = "#\n";
 
