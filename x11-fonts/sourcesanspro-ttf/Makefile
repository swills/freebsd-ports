# Created by: Pedro Giffuni
# $FreeBSD: head/x11-fonts/sourcesanspro-ttf/Makefile 456806 2017-12-20 14:37:27Z sunpoet $

PORTNAME=	sourcesanspro
PORTVERSION=	2.020
DISTVERSIONSUFFIX=	R-ro/1.075R-it
CATEGORIES=	x11-fonts
PKGNAMESUFFIX=	-ttf

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Set of fonts by Adobe designed for user interfaces

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

PORTSCOUT=	skipv:variable-fonts

NO_ARCH=	yes
NO_BUILD=	yes
USES=		fonts

FONTNAME=	SourceSansPro
SUB_FILES=	pkg-message

USE_GITHUB=	yes
GH_ACCOUNT=	adobe-fonts
GH_PROJECT=	source-sans-pro

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/TTF/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
