# $FreeBSD: head/x11-toolkits/qt5-canvas3d/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	canvas3d
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt canvas3d module

USE_QT=		core gui network qml quick buildtools_build
USES=		qmake qt-dist:5,canvas3d

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
