# $FreeBSD: head/graphics/qt5-3d/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	3d
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt3D module

LIB_DEPENDS=	libassimp.so:multimedia/assimp

USES=		pkgconfig qmake:norecursive qt-dist:5,3d
USE_QT=		concurrent core gui network qml quick buildtools_build

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
