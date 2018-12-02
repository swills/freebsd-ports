# $FreeBSD: head/www/qt5-websockets-qml/Makefile 486419 2018-12-02 15:28:14Z tcberner $

PORTNAME=	websockets-qml
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol (QML bindings)

USE_QT=		buildtools_build core declarative network websockets
USES=		compiler:c++11-lang qmake qt-dist:5,websockets
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
