# $FreeBSD: head/devel/qt5-scxml/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	scxml
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	2
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 SXCML module

USES=		compiler:c++11-lang qmake qt-dist:5,scxml
USE_QT=		core declarative network buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
