--- go/src/fuchsia.googlesource.com/jiri/isatty/isatty_dummy.go.orig	2017-11-25 07:11:08 UTC
+++ go/src/fuchsia.googlesource.com/jiri/isatty/isatty_dummy.go
@@ -4,6 +4,7 @@
 
 // +build !linux
 // +build !darwin
+// +build !freebsd
 
 package isatty
 
