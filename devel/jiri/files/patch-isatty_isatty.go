--- go/src/fuchsia.googlesource.com/jiri/isatty/isatty.go.orig	2017-11-25 07:11:08 UTC
+++ go/src/fuchsia.googlesource.com/jiri/isatty/isatty.go
@@ -2,7 +2,7 @@
 // Use of this source code is governed by a BSD-style
 // license that can be found in the LICENSE file.
 
-// +build linux darwin
+// +build linux darwin freebsd
 package isatty
 
 import (
