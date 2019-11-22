--- src/libutil/ustring.cpp.orig	2019-11-17 03:20:52 UTC
+++ src/libutil/ustring.cpp
@@ -314,22 +314,22 @@ struct libcpp_string__long {
     std::string::size_type __size_;
     std::string::size_type __cap_;
 };
-#    if _LIBCPP_BIG_ENDIAN
+#    if __BIG_ENDIAN__
 enum { libcpp_string__long_mask = 0x1ul };
-#    else   // _LIBCPP_BIG_ENDIAN
+#    else   // __BIG_ENDIAN__
 enum { libcpp_string__long_mask = ~(std::string::size_type(~0) >> 1) };
-#    endif  // _LIBCPP_BIG_ENDIAN
+#    endif  // __BIG_ENDIAN__
 #else
 struct libcpp_string__long {
     std::string::size_type __cap_;
     std::string::size_type __size_;
     std::string::pointer __data_;
 };
-#    if _LIBCPP_BIG_ENDIAN
+#    if __BIG_ENDIAN__
 enum { libcpp_string__long_mask = ~(std::string::size_type(~0) >> 1) };
-#    else   // _LIBCPP_BIG_ENDIAN
+#    else   // __BIG_ENDIAN__
 enum { libcpp_string__long_mask = 0x1ul };
-#    endif  // _LIBCPP_BIG_ENDIAN
+#    endif  // __BIG_ENDIAN__
 #endif
 
 enum {
