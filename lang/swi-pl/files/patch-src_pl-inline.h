--- src/pl-inline.h.orig	2020-05-27 11:55:29 UTC
+++ src/pl-inline.h
@@ -131,9 +131,9 @@ __builtin_popcount(size_t sz)
 #define ATOMIC_OR(ptr, v)	__atomic_fetch_or(ptr, v, __ATOMIC_SEQ_CST)
 #define ATOMIC_AND(ptr, v)	__atomic_fetch_and(ptr, v, __ATOMIC_SEQ_CST)
 
-#define __COMPARE_AND_SWAP(at, from, to) \
-	__atomic_compare_exchange_n(at, &(from), to, FALSE, \
-				    __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
+#define __COMPARE_AND_SWAP(at, from, to) sizeof(from) > sizeof(void *) \
+	? __atomic_compare_exchange(at, &(from), &(to), FALSE, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST) \
+	: __atomic_compare_exchange_n(at, &(from), to, FALSE, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
 
 static inline int
 COMPARE_AND_SWAP_PTR(void *at, void *from, void *to)
