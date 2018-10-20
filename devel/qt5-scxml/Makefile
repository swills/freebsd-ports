# $FreeBSD: head/devel/qt5-scxml/Makefile 482585 2018-10-20 16:13:40Z tcberner $

PORTNAME=	scxml
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 SXCML module

USE_QT=		core network qml buildtools_build
USES=		compiler:c++11-lang qmake qt-dist:5,scxml
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
