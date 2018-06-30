# $FreeBSD: head/devel/qt5-scxml/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	scxml
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 SXCML module

USE_QT=		core network qml buildtools_build
USES=		qmake qt-dist:5,scxml
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
