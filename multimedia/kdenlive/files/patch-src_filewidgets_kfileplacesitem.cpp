--- src/filewidgets/kfileplacesitem.cpp.orig	2018-08-24 00:41:10.051319000 -0300
+++ src/filewidgets/kfileplacesitem.cpp	2018-08-24 00:41:29.452981000 -0300
@@ -162,12 +162,12 @@ KFilePlacesModel::GroupType KFilePlacesI
             return KFilePlacesModel::DevicesType;
         }
 
-        if (protocol == QLatin1String("remote") ||
-            KProtocolInfo::protocolClass(protocol) != QLatin1String(":local")) {
+//        if (protocol == QLatin1String("remote") ||
+//            KProtocolInfo::protocolClass(protocol) != QLatin1String(":local")) {
             return KFilePlacesModel::RemoteType;
-        } else {
+//        } else {
             return KFilePlacesModel::PlacesType;
-        }
+//        }
     }
 
     if (m_drive && (m_drive->isHotpluggable() || m_drive->isRemovable())) {
