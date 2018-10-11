--- include/opkele/iterator.h.orig	2018-09-26 16:30:14 UTC
+++ include/opkele/iterator.h
@@ -159,11 +159,6 @@ namespace opkele {
 			if(!found) empty=true;
 			return *this;
 		    }
-		    basic_filterator<IT> operator++(int) {
-			basic_filterator<IT> rv(*this);
-			++(*this);
-			return rv;
-		    }
 
 		    void prepare() {
 			bool found = false;
