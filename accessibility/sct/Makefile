# $FreeBSD: head/accessibility/sct/Makefile 459211 2018-01-16 22:24:57Z feld $

PORTNAME=	sct
PORTVERSION=	0.1.0
CATEGORIES=	accessibility

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	Utility to change screen temperature

LICENSE=	UNLICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	0mp

USE_XORG=	x11 xrandr

PLIST_FILES=	bin/sct

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/sct

.include <bsd.port.mk>
