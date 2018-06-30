# $FreeBSD: head/x11-toolkits/qt5-datavis3d/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	datavis3d
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 3D data visualization module

USE_QT=		core network gui widgets qml quick designer buildtools_build

USES=		qmake qt-dist:5,datavis3d
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
