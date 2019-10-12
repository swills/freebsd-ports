Fix some locations specific to the ports tree i.e.

- Fixes location of manpages resulting to be in site_perl
- Set LOCALSTATEDIR to /var/run as done in this ports tree
- Install agent.cfg as agent.cfg.sample

--- Makefile.PL.orig	2019-07-01 15:37:06 UTC
+++ Makefile.PL
@@ -162,25 +162,15 @@
 
     # for some reason, initialising variables from the global scope doesn't work
     %variables = (
-        PREFIX               => '/usr/local',
         VERSION              => '',
         COMMENTS             => "Platform  : $Config{myuname},Build date: ".gmtime()." (GMT)",
         RAWCOMMENTS          => '',
-        INSTALLSCRIPT        => '$(PREFIX)/bin',
-        INSTALLSITESCRIPT    => '$(PREFIX)/bin',
-        INSTALLVENDORSCRIPT  => '$(PREFIX)/bin',
         INSTALLLIB           => '$(DATADIR)/lib',
         INSTALLSITELIB       => '$(DATADIR)/lib',
         INSTALLVENDORLIB     => '$(DATADIR)/lib',
-        INSTALLMAN1DIR       => '$(PREFIX)/share/man/man1',
-        INSTALLSITEMAN1DIR   => '$(PREFIX)/share/man/man1',
-        INSTALLVENDORMAN1DIR => '$(PREFIX)/share/man/man1',
-        INSTALLMAN3DIR       => '$(PREFIX)/share/man/man3',
-        INSTALLSITEMAN3DIR   => '$(PREFIX)/share/man/man3',
-        INSTALLVENDORMAN3DIR => '$(PREFIX)/share/man/man3',
         SYSCONFDIR           => '$(PREFIX)/etc/fusioninventory',
         DATADIR              => '$(PREFIX)/share/fusioninventory',
-        LOCALSTATEDIR        => '$(PREFIX)/var/fusioninventory',
+        LOCALSTATEDIR        => '/var/run/fusioninventory',
     );
 
     # allow variables defined on command line to override defaults
@@ -242,14 +232,11 @@
 	$(NOECHO) $(CHMOD) $(PERM_DIR) $(DESTDIR)$(SYSCONFDIR)
 	for config in agent.cfg inventory-server-plugin.cfg server-test-plugin.cfg ssl-server-plugin.cfg ; \
 	do \
-	  if $(TEST_F) $(DESTDIR)/$(SYSCONFDIR)/$$config; then \
-	    $(RM_F) $(DESTDIR)$(SYSCONFDIR)/$$config.new; \
-	    $(CP) etc/$$config $(DESTDIR)$(SYSCONFDIR)/$$config.new; \
-	    $(CHMOD) $(PERM_RW) $(DESTDIR)$(SYSCONFDIR)/$$config.new; \
-	  else \
-	    $(CP) etc/$$config $(DESTDIR)$(SYSCONFDIR)/$$config; \
-	    $(CHMOD) $(PERM_RW) $(DESTDIR)$(SYSCONFDIR)/$$config; \
+	  if $(TEST_F) $(DESTDIR)/$(SYSCONFDIR)/$$config.sample; then \
+	    $(RM_F) $(DESTDIR)$(SYSCONFDIR)/$$config.sample; \
 	  fi; \
+	  $(CP) etc/$$config $(DESTDIR)$(SYSCONFDIR)/$$config.sample; \
+	  $(CHMOD) $(PERM_RW) $(DESTDIR)$(SYSCONFDIR)/$$config.sample; \
 	done
 	$(ABSPERLRUN) -pi \
 	    -e "s|=> undef, # SYSCONFDIR.*|=> '$(SYSCONFDIR)',|;" \
