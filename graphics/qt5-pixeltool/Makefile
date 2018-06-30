# $FreeBSD: head/graphics/qt5-pixeltool/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	pixeltool
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 screen magnifier

USE_QT=		core gui widgets buildtools_build
USES=		qmake qt-dist:5,tools

# qt5logo.png is installed by qt5-widgets.
DESKTOP_ENTRIES="Qt 5 PixelTool" "" \
		"${PREFIX}/share/pixmaps/qt5logo.png" \
		"${PREFIX}/${QT_BINDIR_REL}/pixeltool" \
		"Graphics;Qt;" true

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

.include <bsd.port.mk>
