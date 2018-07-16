--- src/openrct2/common.h.orig	2018-06-12 13:59:14 UTC
+++ src/openrct2/common.h
@@ -95,7 +95,7 @@ using colour_t = uint8;
 
 #endif // defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
 
-#if !((defined (_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200809L) || (defined(_XOPEN_SOURCE) && _XOPEN_SOURCE >= 700) || (defined(__APPLE__) && defined(__MACH__)) || defined(__ANDROID_API__))
+#if !((defined (_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200809L) || (defined(_XOPEN_SOURCE) && _XOPEN_SOURCE >= 700) || (defined(__APPLE__) && defined(__MACH__)) || defined(__ANDROID_API__) || defined(__FreeBSD__))
 char *strndup(const char *src, size_t size);
 #endif // !(POSIX_C_SOURCE >= 200809L || _XOPEN_SOURCE >= 700)
 
