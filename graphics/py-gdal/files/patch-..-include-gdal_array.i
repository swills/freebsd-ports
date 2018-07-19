--- ../include/gdal_array.i.orig	2018-01-19 13:54:15.507107000 +0100
+++ ../include/gdal_array.i	2018-01-18 19:48:52.724277000 +0100
@@ -1065,6 +1065,7 @@
 
 %pythoncode %{
 import numpy
+from . import _gdal_array
 
 import gdalconst
 import gdal
