--- src/onefetch/image_backends/sixel.rs.orig	2020-10-22 18:55:10 UTC
+++ src/onefetch/image_backends/sixel.rs
@@ -74,7 +74,7 @@ impl super::ImageBackend for SixelBackend {
     fn add_image(&self, lines: Vec<String>, image: &DynamicImage) -> String {
         let tty_size = unsafe {
             let tty_size: winsize = std::mem::zeroed();
-            ioctl(STDOUT_FILENO, TIOCGWINSZ, &tty_size);
+            ioctl(STDOUT_FILENO, TIOCGWINSZ.into(), &tty_size);
             tty_size
         };
         let cw = tty_size.ws_xpixel / tty_size.ws_col;
