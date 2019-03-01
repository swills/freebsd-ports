# $FreeBSD: head/x11-fonts/material-icons-ttf/Makefile 494090 2019-02-27 22:09:42Z swills $

PORTNAME=	material-icons
DISTVERSION=	4.0.5
CATEGORIES=	x11-fonts
PKGNAMESUFFIX=	-ttf

MAINTAINER=	voidanix@420blaze.it
COMMENT=	Material Design icon set from Google

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	fonts

USE_GITHUB=	yes
GH_ACCOUNT=	jossef
GH_PROJECT=	material-design-icons-iconfont

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${FONTSDIR}/MaterialIcons-Regular.ttf

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/dist/fonts/*.ttf ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
