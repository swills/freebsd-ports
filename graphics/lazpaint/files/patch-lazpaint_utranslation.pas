--- lazpaint/utranslation.pas.orig	2021-01-24 12:45:19 UTC
+++ lazpaint/utranslation.pas
@@ -79,10 +79,8 @@ begin
       result := GetDarwinResourcesPath+AResource+PathDelim
     else
     {$ELSE}
-      {$IFDEF LINUX}
-      if DirectoryExists(GetLinuxResourcesPath+AResource) then
-        result := GetLinuxResourcesPath+AResource+PathDelim
-      else
+      {$IFDEF FREEBSD}
+        result:='%%DATADIR%%'+PathDelim+AResource+PathDelim;
       {$ENDIF}
     {$ENDIF}
     result:=ExtractFilePath(Application.ExeName)+AResource+PathDelim;
