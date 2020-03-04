--- build.sh.orig	2019-12-09 22:30:04 UTC
+++ build.sh
@@ -72,7 +72,7 @@ echo -e "${RED}*** ${@}${NC}"
 
 cd `dirname $0`
 
-MAKE_TYPE=make
+MAKE_TYPE=gmake
 
 export CFLAGS='-O -Wall -fPIC'
 
@@ -86,21 +86,14 @@ case $OS in
 		MAKEFILE=make_win32.mak
 		;;
 	*)
-		SWT_OS=`uname -s | tr -s '[:upper:]' '[:lower:]'`
+		SWT_OS=`uname -s | tr '[:upper:]' '[:lower:]'`
 		MAKEFILE=make_linux.mak
 		;;
 esac
 
 # Determine which CPU type we are building for
 if [ "${MODEL}" = "" ]; then
-	if uname -i > /dev/null 2>&1; then
-		MODEL=`uname -i`
-		if [ ${MODEL} = 'unknown' ]; then
-		  MODEL=`uname -m`
-		fi
-	else
 		MODEL=`uname -m`
-	fi
 fi
 case $MODEL in
 	"x86_64")
@@ -111,6 +104,11 @@ case $MODEL in
 		SWT_ARCH=x86
 		AWT_ARCH=i386
 		;;
+	"powerpc" | "powerpc64")
+		SWT_ARCH=ppc64
+		AWT_ARCH=ppc64
+		MODEL=`uname -p`
+		;;
 	*)
 		SWT_ARCH=$MODEL
 		AWT_ARCH=$MODEL
@@ -194,7 +192,7 @@ esac
 
 
 # For 64-bit CPUs, we have a switch
-if [ ${MODEL} = 'x86_64' -o ${MODEL} = 'ia64' -o ${MODEL} = 's390x' -o ${MODEL} = 'ppc64le' -o ${MODEL} = 'aarch64' ]; then
+if [ ${MODEL} = 'amd64' -o ${MODEL} = 'ia64' -o ${MODEL} = 's390x' -o ${MODEL} = 'ppc64le' -o ${MODEL} = 'aarch64' -o ${MODEL} = 'powerpc64' ]; then
 	SWT_PTR_CFLAGS=-DJNI64
 	if [ -d /lib64 ]; then
 		XLIB64=-L/usr/X11R6/lib64
@@ -205,6 +203,11 @@ if [ ${MODEL} = 'x86_64' -o ${MODEL} = 'ia64' -o ${MOD
 		XLIB64="${XLIB64} -L/usr/lib64"
 		SWT_LFLAGS=-m64
 		export SWT_LFLAGS
+	fi
+	if [ ${SWT_OS} = "freebsd" ]
+	then
+		SWT_PTR_CFLAGS="${SWT_PTR_CFLAGS} -m64"
+		export SWT_LFLAGS=-m64
 	fi
 	export SWT_PTR_CFLAGS
 fi
