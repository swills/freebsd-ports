# $FreeBSD: head/graphics/qt5-3d/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	3d
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt3D module

LIB_DEPENDS=	libassimp.so:multimedia/assimp

USES=		compiler:c++11-lang pkgconfig qmake:norecursive qt-dist:5,3d
USE_QT=		concurrent core declarative gui network buildtools_build

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
