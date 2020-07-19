--- widget/widechar.c.orig	2020-07-19 15:24:15.426672000 +0200
+++ widget/widechar.c	2020-07-19 15:26:49.202087000 +0200
@@ -185,6 +185,7 @@
 static inline struct mb_rule apply_mb_rules_going_right (WEdit * edit, long byte_index, struct mb_rule mb_rule)
 {
 #ifdef HAVE_WCHAR_H
+#ifdef HAVE_MBRTOWC
     C_wchar_t wc;
     unsigned char p[16];
     int n;
@@ -216,6 +217,7 @@
     }
     mb_rule.end = 0;
     mb_rule.ch = -1;
+#endif
 #endif
     return mb_rule;
 }
