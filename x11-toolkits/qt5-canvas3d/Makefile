# $FreeBSD: head/x11-toolkits/qt5-canvas3d/Makefile 484140 2018-11-04 19:00:53Z tcberner $

PORTNAME=	canvas3d
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt canvas3d module

USE_QT=		core declarative gui network buildtools_build
USES=		compiler:c++11-lang qmake qt-dist:5,canvas3d

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
