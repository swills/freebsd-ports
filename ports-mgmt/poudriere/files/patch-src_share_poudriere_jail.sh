--- src/share/poudriere/jail.sh.orig	2020-06-20 21:37:00 UTC
+++ src/share/poudriere/jail.sh
@@ -1138,7 +1138,7 @@ shift $((OPTIND-1))
 post_getopts
 
 METHOD=${METHOD:-ftp}
-CLEANJAIL=${CLEAN:-none}
+CLEANJAIL=${CLEANJAIL:-none}
 if [ -n "${JAILNAME}" -a ${CREATE} -eq 0 ]; then
 	_jget ARCH ${JAILNAME} arch || :
 	_jget JAILFS ${JAILNAME} fs || :
