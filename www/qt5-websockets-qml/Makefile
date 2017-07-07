# $FreeBSD: head/www/qt5-websockets-qml/Makefile 445169 2017-07-06 20:40:51Z tcberner $

PORTNAME=	websockets-qml
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol (QML bindings)

USE_QT5=	buildtools_build core network qml quick websockets
QT_DIST=	websockets
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
