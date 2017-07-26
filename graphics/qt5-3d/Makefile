# $FreeBSD: head/graphics/qt5-3d/Makefile 446395 2017-07-22 12:22:32Z jbeich $

PORTNAME=	3d
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt3D module

LIB_DEPENDS=	libassimp.so:multimedia/assimp

USES=		pkgconfig qmake
USE_QT5=	concurrent core gui qml quick buildtools_build
QT_DIST=	${PORTNAME}

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
