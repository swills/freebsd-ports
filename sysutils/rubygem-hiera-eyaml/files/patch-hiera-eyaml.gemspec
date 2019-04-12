--- hiera-eyaml.gemspec.orig
+++ hiera-eyaml.gemspec
@@ -22,7 +22,7 @@
 
     if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
       s.add_runtime_dependency(%q<optimist>.freeze, [">= 0"])
-      s.add_runtime_dependency(%q<highline>.freeze, ["~> 1.6.19"])
+      s.add_runtime_dependency(%q<highline>.freeze, ["~> 1.6"])
     else
       s.add_dependency(%q<optimist>.freeze, [">= 0"])
       s.add_dependency(%q<highline>.freeze, ["~> 1.6.19"])
