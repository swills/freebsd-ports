--- src/onefetch/image_backends/kitty.rs.orig	2020-10-22 18:54:06 UTC
+++ src/onefetch/image_backends/kitty.rs
@@ -80,7 +80,7 @@ impl super::ImageBackend for KittyBackend {
     fn add_image(&self, lines: Vec<String>, image: &DynamicImage) -> String {
         let tty_size = unsafe {
             let tty_size: winsize = std::mem::zeroed();
-            ioctl(STDOUT_FILENO, TIOCGWINSZ, &tty_size);
+            ioctl(STDOUT_FILENO, TIOCGWINSZ.into(), &tty_size);
             tty_size
         };
         let width_ratio = f64::from(tty_size.ws_col) / f64::from(tty_size.ws_xpixel);
