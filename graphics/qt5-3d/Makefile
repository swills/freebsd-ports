# $FreeBSD: head/graphics/qt5-3d/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	3d
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	2
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt3D module

LIB_DEPENDS=	libassimp.so:multimedia/assimp

USES=		pkgconfig qmake:norecursive
USE_QT5=	concurrent core gui qml quick buildtools_build
QT_DIST=	${PORTNAME}

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
