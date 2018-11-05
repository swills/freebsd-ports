--- makerules/global/toplevel.mk.orig	2018-11-05 18:41:03 UTC
+++ makerules/global/toplevel.mk
@@ -109,9 +109,9 @@
 # if someone has a ppc linux machine, please define -DLIL/-DBIG in the code,
 # remove them here and use the __ppc__ macro to resolve endianess issues
 	DEFINES		:= -DLIN=1 -DIBM=0 -DAPL=0 -DLIL=1 -DBIG=0
-	CFLAGS		:= $(M32_SWITCH) -D_GLIBCXX_USE_CXX11_ABI=0 -Wno-deprecated-declarations -Wno-multichar -pipe -frounding-math
-	CXXFLAGS	:= $(M32_SWITCH) -D_GLIBCXX_USE_CXX11_ABI=0 -Wno-deprecated -Wno-deprecated-declarations -Wno-multichar -pipe -frounding-math
-	LDFLAGS		:= $(M32_SWITCH) -D_GLIBCXX_USE_CXX11_ABI=0 -static-libgcc
+	CFLAGS		:= $(M32_SWITCH) -D_GLIBCXX_USE_CXX11_ABI=0 -Wno-deprecated-declarations -Wno-multichar -pipe
+	CXXFLAGS	:= $(M32_SWITCH) -D_GLIBCXX_USE_CXX11_ABI=0 -Wno-deprecated -Wno-deprecated-declarations -Wno-multichar -pipe
+	LDFLAGS		:= $(M32_SWITCH) -D_GLIBCXX_USE_CXX11_ABI=0
 	BARE_LDFLAGS	:=
 	STRIPFLAGS	:= -s -x
 endif
