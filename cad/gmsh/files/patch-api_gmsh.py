--- api/gmsh.py.orig	2020-09-19 11:32:20 UTC
+++ api/gmsh.py
@@ -25,16 +25,7 @@ GMSH_API_VERSION_MINOR = 6
 __version__ = GMSH_API_VERSION
 
 oldsig = signal.signal(signal.SIGINT, signal.SIG_DFL)
-libdir = os.path.dirname(os.path.realpath(__file__))
-if platform.system() == "Windows":
-    libpath = os.path.join(libdir, "gmsh-4.6.dll")
-elif platform.system() == "Darwin":
-    libpath = os.path.join(libdir, "libgmsh.dylib")
-else:
-    libpath = os.path.join(libdir, "libgmsh.so")
-
-if not os.path.exists(libpath):
-    libpath = find_library("gmsh")
+libpath = "PREFIX/lib/libgmsh.so.DISTVERSION"
 
 lib = CDLL(libpath)
 
