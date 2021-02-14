--- lib/rubygems/package.rb.orig	2020-02-18 06:58:15 UTC
+++ lib/rubygems/package.rb
@@ -486,7 +486,7 @@ EOM
       path = File.expand_path(path + File::SEPARATOR + basename)
       lstat = File.lstat path rescue nil
       if !lstat || !lstat.directory?
-        unless normalize_path(path).start_with? normalize_path(destination_dir) and (FileUtils.mkdir path, mkdir_options rescue false)
+        unless normalize_path(path).start_with? normalize_path(destination_dir) and (FileUtils.mkdir path, **mkdir_options rescue false)
           raise Gem::Package::PathError.new(file_name, destination_dir)
         end
       end
@@ -502,13 +502,9 @@ EOM
     when 'metadata' then
       @spec = Gem::Specification.from_yaml entry.read
     when 'metadata.gz' then
-      args = [entry]
-      args << { :external_encoding => Encoding::UTF_8 } if
-        Zlib::GzipReader.method(:wrap).arity != 1
-
-      Zlib::GzipReader.wrap(*args) do |gzio|
+      Zlib::GzipReader.wrap(entry, external_encoding: Encoding::UTF_8) do |gzio|
         @spec = Gem::Specification.from_yaml gzio.read
-      end
+      end    
     end
   end
 
