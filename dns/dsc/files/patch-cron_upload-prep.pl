--- cron/upload-prep.pl.orig	2019-02-13 09:12:28 UTC
+++ cron/upload-prep.pl
@@ -1,4 +1,4 @@
-#!/usr/bin/perl
+#!/usr/local/bin/perl
 #
 # Copyright (c) 2008-2019, OARC, Inc.
 # Copyright (c) 2007-2008, Internet Systems Consortium, Inc.
@@ -54,7 +54,7 @@ exit 0 if Proc::PID::File->running(dir =
 sleep 3;
 
 
-foreach my $conf (</usr/local/dsc/etc/*.conf>) {
+foreach my $conf (</usr/local/etc/dsc/*.conf>) {
 	next unless open (CONF, $conf);
 	my $rundir = undef;
 	while (<CONF>) {
