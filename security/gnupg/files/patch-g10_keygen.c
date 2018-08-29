Allow 8192 bit RSA keys to be selected when generating keys interactively
with --full-generate-key and --enable-large-rsa
Based on https://lists.gnupg.org/pipermail/gnupg-devel/2015-February/029466.html
--- g10/keygen.c.orig	2018-08-14 13:22:40 UTC
+++ g10/keygen.c
@@ -2116,7 +2116,7 @@ get_keysize_range (int algo, unsigned in
 
     default:
       *min = opt.compliance == CO_DE_VS ? 2048: 1024;
-      *max = 4096;
+      *max = (opt.flags.large_rsa ? 8192 : 4096);
       def = 2048;
       break;
     }
