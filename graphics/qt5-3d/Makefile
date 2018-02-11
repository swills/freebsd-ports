# $FreeBSD: head/graphics/qt5-3d/Makefile 461274 2018-02-08 22:09:15Z yuri $

PORTNAME=	3d
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
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
