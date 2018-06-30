# Created by: Olivier Duchateau
# $FreeBSD: head/graphics/phototonic/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	phototonic
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Image viewer and organizer

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libexiv2.so:graphics/exiv2

USES=		desktop-file-utils gettext qmake qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	oferkv
USE_GL=		gl
USE_QT=		core gui imageformats svg widgets buildtools_build

post-patch:
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' \
		${WRKSRC}/phototonic.pro

.include <bsd.port.mk>
