# $FreeBSD: head/www/qt5-websockets-qml/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	websockets-qml
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol (QML bindings)

USES=		compiler:c++11-lang qmake qt-dist:5,websockets
USE_QT=		buildtools_build core declarative network websockets
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
