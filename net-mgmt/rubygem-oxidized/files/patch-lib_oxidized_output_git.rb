--- lib/oxidized/output/git.rb.orig	2020-05-10 12:07:10 UTC
+++ lib/oxidized/output/git.rb
@@ -74,7 +74,7 @@ module Oxidized
       repo = Rugged::Repository.new repo
       walker = Rugged::Walker.new(repo)
       walker.sorting(Rugged::SORT_DATE)
-      walker.push(repo.head.target)
+      walker.push(repo.head.target.oid)
       i = -1
       tab = []
       walker.each do |commit|
