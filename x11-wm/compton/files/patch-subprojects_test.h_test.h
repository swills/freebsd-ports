https://github.com/yshui/test.h/pull/1

--- subprojects/test.h/test.h.orig	2019-09-21 00:08:00 UTC
+++ subprojects/test.h/test.h
@@ -8,6 +8,11 @@
 #include <stdlib.h>
 #include <string.h>
 
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#include <sys/sysctl.h>
+#include <unistd.h> // getpid
+#endif
+
 struct test_file_metadata;
 
 struct test_failure {
@@ -91,11 +96,31 @@ extern void __attribute__((weak)) (*test_h_unittest_se
 /// @param[out] tests_run if not NULL, set to whether tests were run
 static inline void __attribute__((constructor(102))) run_tests(void) {
 	bool should_run = false;
+#ifdef KERN_PROC_ARGS
+	int mib[] = {
+		CTL_KERN,
+#if defined(__NetBSD__) || defined(__OpenBSD__)
+		KERN_PROC_ARGS,
+		getpid(),
+		KERN_PROC_ARGV,
+#else
+		KERN_PROC,
+		KERN_PROC_ARGS,
+		getpid(),
+#endif
+	};
+	char *arg = NULL;
+	size_t arglen;
+	sysctl(mib, sizeof(mib)/sizeof(mib[0]), NULL, &arglen, NULL, 0);
+	arg = malloc(arglen);
+	sysctl(mib, sizeof(mib)/sizeof(mib[0]), arg, &arglen, NULL, 0);
+#else
 	FILE *cmdlinef = fopen("/proc/self/cmdline", "r");
 	char *arg = NULL;
 	int arglen;
 	fscanf(cmdlinef, "%ms%n", &arg, &arglen);
 	fclose(cmdlinef);
+#endif
 	for (char *pos = arg; pos < arg + arglen; pos += strlen(pos) + 1) {
 		if (strcmp(pos, "--unittest") == 0) {
 			should_run = true;
