--- src/MemoryX.h.orig	2018-10-01 14:07:33 UTC
+++ src/MemoryX.h
@@ -628,7 +628,7 @@ make_value_transform_iterator(const Iterator &iterator
 // For using std::unordered_map on wxString
 namespace std
 {
-   template<typename T> struct hash;
+   //template<typename T> struct hash;
    template<> struct hash< wxString > {
       size_t operator () (const wxString &str) const // noexcept
       {
