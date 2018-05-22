# $FreeBSD: head/graphics/qt5-imageformats/Makefile 470288 2018-05-18 12:27:43Z rakuco $

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

USE_QT5=	core gui buildtools_build
QT_DIST=	${PORTNAME}
USES=		localbase qmake

.include <bsd.port.mk>
