# $FreeBSD: head/x11-fonts/materialdesign-ttf/Makefile 492131 2019-02-04 13:38:15Z miwi $

PORTNAME=	materialdesign
DISTVERSIONPREFIX=	v
DISTVERSION=	3.4.93
CATEGORIES=	x11-fonts
PKGNAMESUFFIX=	-ttf

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Material Design Webfont

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/license.md

USES=	fonts

NO_ARCH=	yes
NO_BUILD=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	Templarian
GH_PROJECT=	MaterialDesign-Webfont

PORTSCOUT=	skipv:variable-fonts

FONTNAME=	MaterialDesign-Webfont

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}/
	${INSTALL_DATA} ${WRKSRC}/fonts/*.ttf ${STAGEDIR}${FONTSDIR}/

.include <bsd.port.mk>
