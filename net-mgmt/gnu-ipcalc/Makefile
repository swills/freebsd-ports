# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/net-mgmt/gnu-ipcalc/Makefile 471020 2018-05-28 05:40:25Z ehaupt $

PORTNAME=	ipcalc
PORTVERSION=	0.2.3
CATEGORIES=	net-mgmt
PKGNAMEPREFIX=	gnu-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Modern network address calculation tool for IPv4 and IPv6

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS_INSTALL=	ipcalc-[0-9]*

USES=		gmake localbase
USE_GITHUB=	yes
GH_ACCOUNT=	nmav

OPTIONS_DEFINE=	GEOIP
OPTIONS_DEFAULT=GEOIP

GEOIP_LIB_DEPENDS=	libGeoIP.so:net/GeoIP
GEOIP_MAKE_ENV=		LIBPATH=${LOCALBASE}/lib
GEOIP_MAKE_ENV_OFF=	USE_GEOIP=no USE_DYN_GEOIP=no

PLIST_FILES=	bin/ipcalc man/man1/ipcalc.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
