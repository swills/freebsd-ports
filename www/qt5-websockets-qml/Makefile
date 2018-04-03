# $FreeBSD: head/www/qt5-websockets-qml/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	websockets-qml
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol (QML bindings)

USE_QT5=	buildtools_build core network qml quick websockets
QT_DIST=	websockets
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
