# $FreeBSD: head/www/qt5-websockets-qml/Makefile 484140 2018-11-04 19:00:53Z tcberner $

PORTNAME=	websockets-qml
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol (QML bindings)

USE_QT=		buildtools_build core declarative network websockets
USES=		qmake qt-dist:5,websockets
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
