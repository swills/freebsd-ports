# Created by: Stefan Bethke <stb@lassitu.de>
# $FreeBSD: head/devel/firmware-utils/Makefile 421700 2016-09-10 15:13:49Z marino $

PORTNAME=	firmware-utils
PORTVERSION=	20111222
CATEGORIES=	devel
MASTER_SITES=	http://www.transit.hanse.de/mirror/svn.openwrt.org/firmware-utils/

MAINTAINER=	stb@lassitu.de
COMMENT=	Create device firmware images

LICENSE=	GPLv2

USES=		ssl tar:bzip2

MAKEFILE=	${FILESDIR}/Makefile
MAKE_ARGS+=	INSTALL_PROGRAM="${INSTALL_PROGRAM}" PREFIX=${PREFIX}
LDFLAGS+=	-L${OPENSSLLIB}

.include <bsd.port.mk>
