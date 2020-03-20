--- plugins/mod_http_files.lua	2020-01-02 12:49:37.000000000 +0300
+++ plugins/mod_http_files.lua	2020-03-06 00:54:03.347542000 +0300
@@ -112,7 +112,7 @@
 		local last_modified = os_date('!%a, %d %b %Y %H:%M:%S GMT', attr.modification);
 		response_headers.last_modified = last_modified;
 
-		local etag = ('"%02x-%x-%x-%x"'):format(attr.dev or 0, attr.ino or 0, attr.size or 0, attr.modification or 0);
+		local etag = ('"%02x-%x-%x-%x"'):format(math.abs(attr.dev or 0), attr.ino or 0, attr.size or 0, attr.modification or 0);
 		response_headers.etag = etag;
 
 		local if_none_match = request_headers.if_none_match
