# $FreeBSD: head/net/v2ray/Makefile $

PORTNAME=	v2ray
PORTVERSION=	4.14.0
CATEGORIES=	net
MASTER_SITES=	https://github.com/v2ray/v2ray-core/releases/download/v${PORTRSION}/
DIST_SUBDIR=	${PORTNAME}
DISTFILES=	src_all.zip

MAINTAINER=	shen.elf@gmail.com
COMMENT=	A platform for building proxies to bypass network restrictions

LICENSE=	MIT

BUILD_DEPENDS=	go>0:lang/go

USES=		zip compiler

PLIST_FILES=	bin/v2ray \
		bin/v2ctl \
		etc/v2ray/config.json.example \
		etc/v2ray/vpoint_socks_vmess.json \
		etc/v2ray/vpoint_vmess_freedom.json \
		share/v2ray/geoip.dat \
		share/v2ray/geosite.dat

NO_WRKSUBDIR=	yes
WRKSRC=	${WRKDIR}/src

USE_RC_SUBR=	v2ray

USERS=		v2ray
GROUPS=		v2ray

SUB_LIST=	USER="${USERS}" \
		GROUP="${GROUPS}"

do-build:
	@cd ${WRKSRC} && \
	${SETENV} ${MAKE_ENV} GOPATH=${WRKDIR} go build --ldflags '-s -w' -v -o ${WRKDIR}/bin/v2ray v2ray.com/core/main && \
	${SETENV} ${MAKE_ENV} GOPATH=${WRKDIR} go build --ldflags '-s -w' -v -o ${WRKDIR}/bin/v2ctl v2ray.com/ext/tools/control/main

do-install:
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_PROGRAM} ${WRKDIR}/bin/v2ray ${STAGEDIR}${PREFIX}/bin/v2ray
	${INSTALL_PROGRAM} ${WRKDIR}/bin/v2ctl ${STAGEDIR}${PREFIX}/bin/v2ctl
	${INSTALL_DATA} ${WRKSRC}/v2ray.com/core/release/config/config.json ${STAGEDIR}${ETCDIR}/config.json.example
	${INSTALL_DATA} ${WRKSRC}/v2ray.com/core/release/config/vpoint_socks_vmess.json ${STAGEDIR}${ETCDIR}/vpoint_socks_vmess.json
	${INSTALL_DATA} ${WRKSRC}/v2ray.com/core/release/config/vpoint_vmess_freedom.json ${STAGEDIR}${ETCDIR}/vpoint_vmess_freedom.json
	${INSTALL_DATA} ${WRKSRC}/v2ray.com/core/release/config/geoip.dat ${STAGEDIR}${DATADIR}/geoip.dat
	${INSTALL_DATA} ${WRKSRC}/v2ray.com/core/release/config/geosite.dat ${STAGEDIR}${DATADIR}/geosite.dat

.include <bsd.port.mk>
