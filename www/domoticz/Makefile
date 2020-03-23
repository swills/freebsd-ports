# $FreeBSD$

PORTNAME=	domoticz
PORTVERSION=	${DOMOTICZ_REL}
CATEGORIES=	www

MAINTAINER=	kiwi@oav.net
COMMENT=	Home Automation System (Development Branch)

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/License.txt

LIB_DEPENDS=	libcurl.so:ftp/curl \
		libopenzwave.so:comms/openzwave-devel \
		libjsoncpp.so:devel/jsoncpp
BUILD_DEPENDS=	cereal>=1.2.2:devel/cereal

USES=		cmake pkgconfig ssl

CONFLICTS_INSTALL?=	domoticz-[234]*

OPTIONS_SUB=	YES
OPTIONS_DEFINE=	SSSL SBOOST SLUA SMQTT SSQLITE SMINIZIP PYTHON TELLDUS PRECOMP
OPTIONS_DEFAULT=	PYTHON
SBOOST_DESC=	Use static Boost instead of dynamic linking
SSSL_DESC=	Use static OpenSSL library instead of dynamic linking
SLUA_DESC=	Use domoticz provided LUA instead of ports one
SMQTT_DESC=	Use domoticz mosquitto instead of ports one
SSQLITE_DESC=	Use domoticz SQLLite instead of ports one
SMINIZIP_DESC=	Use domoticz minizip instead of ports one
PYTHON_DESC=	Enable support for Python Plugins
TELLDUS_DESC=	Enable support for Telldus
PRECOMP_DESC=	Enable usage of precompiled header to speed build time

.include <bsd.port.options.mk>

# This hack is to get rid of dependency of git while building
# the package.
DOMOTICZ_REL=	2020.1
USE_GITHUB=	yes

USE_RC_SUBR=	domoticz

USERS=		domoticz
GROUPS=		domoticz

CMAKE_ARGS+=	-DCMAKE_INSTALL_PREFIX=${PREFIX}/domoticz \
		-DUSE_BUILTIN_ZLIB="NO" \
		-DUSE_STATIC_OPENZWAVE="NO" \
		-DUSE_BUILTIN_JSONCPP="NO" \
		-DUSE_BUILTIN_CEREAL="NO"

.if ${PORT_OPTIONS:MSSSL}
CMAKE_ARGS+=	-DUSE_OPENSSL_STATIC="YES"
.else
CMAKE_ARGS+=	-DUSE_OPENSSL_STATIC="NO"
.endif

.if ${PORT_OPTIONS:MSBOOST}
CMAKE_ARGS+=	-DUSE_STATIC_BOOST="YES"
BUILD_DEPENDS+=	boost-libs>=0:devel/boost-libs
.else
CMAKE_ARGS+=	-DUSE_STATIC_BOOST="NO"
LIB_DEPENDS+=	libboost_system.so:devel/boost-libs
.endif

.if ${PORT_OPTIONS:MSLUA}
CMAKE_ARGS+=	-DUSE_BUILTIN_LUA="YES"
.else
CMAKE_ARGS+=	-DUSE_BUILTIN_LUA="NO"
USES+=		lua:53
.endif

.if ${PORT_OPTIONS:MSMQTT}
CMAKE_ARGS+=	-DUSE_BUILTIN_MQTT="YES"
.else
CMAKE_ARGS+=	-DUSE_BUILTIN_MQTT="NO"
LIB_DEPENDS+=	libmosquitto.so:net/mosquitto
.endif

.if ${PORT_OPTIONS:MSSQLITE}
CMAKE_ARGS+=	-DUSE_BUILTIN_SQLITE="YES"
.else
CMAKE_ARGS+=	-DUSE_BUILTIN_SQLITE="NO"
USES+=		sqlite
.endif

.if ${PORT_OPTIONS:MSMINIZIP}
CMAKE_ARGS+=	-DUSE_BUILTIN_MINIZIP="YES"
.else
CMAKE_ARGS+=	-DUSE_BUILTIN_MINIZIP="NO"
LIB_DEPENDS+=	libminizip.so:archivers/minizip
.endif

.if ${PORT_OPTIONS:MPYTHON}
CMAKE_ARGS+=	-DUSE_PYTHON="YES"
USES+=		python:3.7
.else
CMAKE_ARGS+=	-DUSE_PYTHON="NO"
.endif

.if ${PORT_OPTIONS:MTELLDUS}
LIB_DEPENDS+=	libtelldus-core.so:comms/telldus-core
.endif

.if ${PORT_OPTIONS:MPRECOMP}
CMAKE_ARGS+=	-DUSE_PRECOMPILED_HEADER="YES"
.else
CMAKE_ARGS+=	-DUSE_PRECOMPILED_HEADER="NO"
.endif

post-patch:
	@${REINPLACE_CMD} -e "s,\/opt,${PREFIX},g" ${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e "s,XXXPREFIXXXX,${PREFIX}/domoticz,g" ${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e "/^ADD_PRECOMPILED_HEADER/ d" ${WRKSRC}/CMakeLists.txt
#	@${REINPLACE_CMD} -e "s/\(#define APPVERSION\)\(.*\)/\1 ${DOMOTICZ_REL}/" ${WRKSRC}/appversion.h
#	@${REINPLACE_CMD} -e "s/\(#define APPHASH\)\(.*\)/\1 \"${GH_TAGNAME}\"/" ${WRKSRC}/appversion.h
#	@${REINPLACE_CMD} -e "s/\(#define APPDATE\)\(.*\)/\1 ${DOMOTICZ_TS}/" ${WRKSRC}/appversion.h

post-install:
	${MKDIR} ${STAGEDIR}/var/db/domoticz ${STAGEDIR}/var/run/domoticz

.include <bsd.port.mk>
