# Created by: Ilya A. Arkhipov <rum1cro@yandex.ru>
# $FreeBSD: head/x11-fonts/inconsolata-lgc-ttf/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	Inconsolata-LGC
PORTVERSION=	20131024
PORTREVISION=	2
CATEGORIES=	x11-fonts

MAINTAINER=	rum1cro@yandex.ru
COMMENT=	Monospaced TrueType font with Cyrillic glyphs

LICENSE=	OFL11

USE_GITHUB=	yes
GH_ACCOUNT=	DeLaGuardo
GH_TAGNAME=	16e2c94

USES=		fonts
USE_XORG=	x11
NO_BUILD=	yes
FONTNAME=	TTF

PLIST_FILES=	${FONTSDIR}/inconsolatalgc.ttf \
		${FONTSDIR}/inconsolatalgcbold.ttf \
		${FONTSDIR}/inconsolatalgcbolditalic.ttf \
		${FONTSDIR}/inconsolatalgcitalic.ttf

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.ttf \
		${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
