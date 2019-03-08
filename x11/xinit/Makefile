# $FreeBSD: head/x11/xinit/Makefile 494839 2019-03-06 20:59:17Z zeising $

PORTNAME=	xinit
PORTVERSION=	1.4.1
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Window System initializer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

XORG_CAT=	app
USE_XORG=	x11

post-patch:
	@${REINPLACE_CMD} 's/test.*-traditional.*;/true;/' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|hexdump|/usr/bin/hexdump|' ${WRKSRC}/startx.cpp
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' ${WRKSRC}/man/xinit.man

.include <bsd.port.mk>
