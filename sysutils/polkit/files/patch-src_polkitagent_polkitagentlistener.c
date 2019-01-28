--- src/polkitagent/polkitagentlistener.c.orig	2018-04-03 20:57:57 UTC
+++ src/polkitagent/polkitagentlistener.c
@@ -439,6 +439,7 @@ polkit_agent_listener_register_with_options (PolkitAge
           server->thread_initialization_error = NULL;
           g_thread_join (server->thread);
           server_free (server);
+          server = NULL;
           goto out;
         }
     }
