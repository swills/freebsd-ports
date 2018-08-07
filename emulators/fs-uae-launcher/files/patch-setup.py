--- setup.py.orig	2018-08-07 05:29:07 UTC
+++ setup.py
@@ -9,12 +9,6 @@ if "install" in sys.argv:
     for arg in sys.argv:
         if arg.startswith("--install-lib="):
             break
-    else:
-        print("ERROR: You should not install FS-UAE Launcher to the default ")
-        print("python library location. Instead, use --install-lib to ")
-        print("install to a custom location, e.g.:")
-        print("python3 setup.py --install-lib=/usr/share/fs-uae-launcher install")
-        sys.exit(1)
 
 title = "FS-UAE Launcher"
 name = "fs-uae-launcher"
