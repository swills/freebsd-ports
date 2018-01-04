--- go/src/fuchsia.googlesource.com/jiri/isatty/isatty_freebsd.go.orig	2017-11-25 07:16:22 UTC
+++ go/src/fuchsia.googlesource.com/jiri/isatty/isatty_freebsd.go
@@ -0,0 +1,11 @@
+// Copyright 2017 The Fuchsia Authors. All rights reserved.
+// Use of this source code is governed by a BSD-style
+// license that can be found in the LICENSE file.
+
+// +build freebsd
+
+package isatty
+
+import "syscall"
+
+const ioctlTermios = syscall.TIOCGETA
