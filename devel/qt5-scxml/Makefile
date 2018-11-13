# $FreeBSD: head/devel/qt5-scxml/Makefile 484140 2018-11-04 19:00:53Z tcberner $

PORTNAME=	scxml
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 SXCML module

USE_QT=		core declarative network buildtools_build
USES=		compiler:c++11-lang qmake qt-dist:5,scxml
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
