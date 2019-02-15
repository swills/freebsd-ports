# $FreeBSD: head/graphics/qt5-imageformats/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	imageformats
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt plugins for additional image formats

LIB_DEPENDS=	libjasper.so:graphics/jasper \
		libmng.so:graphics/libmng \
		libtiff.so:graphics/tiff \
		libwebp.so:graphics/webp

USES=		compiler:c++11-lang localbase qmake qt-dist:5,imageformats
USE_QT=		core gui buildtools_build

.include <bsd.port.mk>
