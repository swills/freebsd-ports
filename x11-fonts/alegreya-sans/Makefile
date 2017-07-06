# $FreeBSD: head/x11-fonts/alegreya-sans/Makefile 445086 2017-07-05 16:41:52Z rakuco $

PORTNAME=	alegreya-sans
DISTVERSIONPREFIX=	v
DISTVERSION=	2.001
PORTEPOCH=	1
CATEGORIES=	x11-fonts

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	Humanist sans serif font with a calligraphic feeling

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		fonts

USE_GITHUB=	yes
GH_ACCOUNT=	huertatipografica
GH_PROJECT=	Alegreya-Sans

NO_BUILD=	yes

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	cd ${WRKSRC}/fonts/otf && \
		${INSTALL_DATA} *.otf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
