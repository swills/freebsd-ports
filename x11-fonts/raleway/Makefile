# Created by: Florian Limberger <flo@snakeoilproductions.net>
# $FreeBSD: head/x11-fonts/raleway/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	raleway
DISTVERSION=	g20140205
PORTREVISION=	1
CATEGORIES=	x11-fonts

MAINTAINER=	flo@snakeoilproductions.net
COMMENT=	Elegant sans-serif font, designed in a single thin weight

LICENSE=	OFL11
LICENSE_FILE=	${WRKSRC}/Open\ Font\ License.markdown

USES=		fonts
USE_GITHUB=	yes
GH_ACCOUNT=	theleagueof
GH_TAGNAME=	15dd22b

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${FONTSDIR}/"Raleway Thin.otf"

do-install:
	${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/"Raleway Thin.otf" ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
