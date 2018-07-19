--- Makefile.PL.orig	2016-05-07 03:14:29 UTC
+++ Makefile.PL
@@ -142,9 +142,9 @@ if ($os eq "solaris") {
 }
 
 my %opts;
+  make_pod 'libPARI.pod', '-to_pod', $paridir; # Now the docs
 unless ($common::parilib) {
   build_tests $paridir;		# Convert the test suite
-  make_pod 'libPARI.pod', '-to_pod', $paridir; # Now the docs
   make_pod 'libPARI.dumb.pod', '-to_dumb_pod', $paridir;
   # ... and paricfg.h
   %opts = build_paricfg($paridir, $common::do_configure, $pari_version);
@@ -195,11 +195,16 @@ $define .= ' -DDL_DFLT_NAME=NULL' if $co
 
 my $extra_inc = extra_includes($paridir);
 
+# strip -L${PREFIX}/lib from lddlflags to not link with installed pari
+my $lddlflags = $Config{lddlflags};
+$lddlflags =~ s/-L$Config{prefix}\/lib(\s|$)//;
+
 # See lib/ExtUtils/MakeMaker.pm for details of how to influence
 # the contents of the Makefile being created.
 &WriteMakefile(
 	       LIBS	     =>  $libs,
-	       INC	     => $extra_inc . ' -I $(PARI_DIR)/src/headers -I $(PARI_DIR)/src -I ./libPARI',
+	       INC	     => '-I$(PARI_DIR)/src',
+	       LDDLFLAGS => $lddlflags,
 	       NAME	     => 'Math::Pari',
 	       ($common::parilib ? () :
 		 (MYEXTLIB   =>  'libPARI/libPARI$(LIB_EXT)')),
