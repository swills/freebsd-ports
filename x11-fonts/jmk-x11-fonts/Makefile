# $FreeBSD: head/x11-fonts/jmk-x11-fonts/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	jmk-x11-fonts
PORTVERSION=	3.0
PORTREVISION=	6
CATEGORIES=	x11-fonts
MASTER_SITES=	http://www.jmknoble.net/fonts/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Jim Knoble's font package for X

BUILD_DEPENDS=	bdftopcf:x11-fonts/bdftopcf \
		mkfontscale>=0:x11-fonts/mkfontscale

USES=		fonts imake

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.pcf.gz ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
