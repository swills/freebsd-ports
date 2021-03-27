--- src/widgets/Grid.cpp.orig	2021-03-09 02:19:38.000000000 -0800
+++ src/widgets/Grid.cpp	2021-03-17 17:03:30.286591000 -0700
@@ -572,7 +572,7 @@
          {
             wxTextDataObject *data = safenew wxTextDataObject(GetCellValue(crow, ccol));
             wxClipboard::Get()->SetData(data);
-            SetCellValue(crow, ccol, {});
+            SetCellValue(crow, ccol, "");
             return;
          }
          break;
