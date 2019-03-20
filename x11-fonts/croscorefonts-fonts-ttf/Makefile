# Created by: Pedro Giffuni
# $FreeBSD: head/x11-fonts/croscorefonts-fonts-ttf/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	croscorefonts
PORTVERSION=	1.31.0
PORTREVISION=	1
CATEGORIES=	x11-fonts
MASTER_SITES=	http://gsdview.appspot.com/chromeos-localmirror/distfiles/ \
		LOCAL/sunpoet

MAINTAINER=	office@FreeBSD.org
COMMENT=	Fonts created from by Google for ChromeOS to replace MS TTF

LICENSE=	APACHE20

NO_ARCH=	yes
NO_BUILD=	yes
USES=		fonts tar:bzip2
USE_XORG=	x11

SUB_FILES=	pkg-message

FONTNAME=	ChromeOS

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}/
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
