# $FreeBSD: head/x11-fonts/alegreya/Makefile 460471 2018-01-31 13:37:53Z rakuco $

PORTNAME=	alegreya
PORTVERSION=	2.006
DISTVERSIONPREFIX=	v
CATEGORIES=	x11-fonts

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	Serif typeface originally intended for literature

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		fonts

USE_GITHUB=	yes
GH_ACCOUNT=	huertatipografica
GH_PROJECT=	Alegreya

NO_BUILD=	yes

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC}/fonts/otf && \
		${INSTALL_DATA} *.otf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
