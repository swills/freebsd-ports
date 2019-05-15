Index: src/dev/drm2/drm_bufs.c
===================================================================
--- src/dev/drm2/drm_bufs.c	(revision 346590)
+++ src/dev/drm2/drm_bufs.c	(working copy)
@@ -63,7 +63,7 @@
 
 	rid = PCIR_BAR(resource);
 	res = bus_alloc_resource_any(dev->dev, SYS_RES_MEMORY, &rid,
-	    RF_SHAREABLE);
+	    RF_SHAREABLE | RF_ACTIVE);
 	if (res == NULL) {
 		DRM_ERROR("Couldn't find resource 0x%x\n", resource);
 		return 1;
@@ -87,7 +87,10 @@
 	if (drm_alloc_resource(dev, resource) != 0)
 		return 0;
 
+#if 0
 	start = rman_get_start(dev->pcir[resource]);
+#endif
+	start = pmap_kextract(rman_get_bushandle(dev->pcir[resource]));
 
 	mtx_unlock(&dev->pcir_lock);
 
