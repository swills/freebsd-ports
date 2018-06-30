# $FreeBSD: head/graphics/qt5-imageformats/Makefile 473503 2018-06-28 17:39:53Z tcberner $

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

USE_QT=		core gui buildtools_build
USES=		localbase qmake qt-dist:5,imageformats

.include <bsd.port.mk>
