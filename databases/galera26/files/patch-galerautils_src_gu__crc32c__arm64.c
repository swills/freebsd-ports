--- galerautils/src/gu_crc32c_arm64.c.orig	2020-12-29 15:10:20 UTC
+++ galerautils/src/gu_crc32c_arm64.c
@@ -83,7 +83,13 @@ gu_crc32c_func_t
 gu_crc32c_hardware()
 {
 #if defined(GU_AT_HWCAP)
-    unsigned long int const hwcaps = getauxval(GU_AT_HWCAP);
+#if defined(__linux__)
+     unsigned long int const hwcaps = getauxval(AT_HWCAP);
+#endif
+#if defined(__FreeBSD__)
+    unsigned long hwcaps;
+    elf_aux_info(AT_HWCAP, &hwcaps, sizeof(hwcaps));
+#endif
     if (hwcaps & GU_HWCAP_CRC32)
     {
         gu_info ("CRC-32C: using hardware acceleration.");
