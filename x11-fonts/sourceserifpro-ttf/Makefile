# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/x11-fonts/sourceserifpro-ttf/Makefile 448549 2017-08-22 16:40:12Z sunpoet $

PORTNAME=	sourceserifpro
PORTVERSION=	2.000
DISTVERSIONSUFFIX=	R
CATEGORIES=	x11-fonts
PKGNAMESUFFIX=	-ttf

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Set of fonts by Adobe designed for UI

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

NO_ARCH=	yes
NO_BUILD=	yes
USES=		fonts

FONTNAME=	SourceSerifPro
SUB_FILES=	pkg-message

GH_ACCOUNT=	adobe-fonts
GH_PROJECT=	source-serif-pro
USE_GITHUB=	yes

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}/
	${INSTALL_DATA} ${WRKSRC}/TTF/*.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
