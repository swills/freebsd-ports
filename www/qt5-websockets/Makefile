# $FreeBSD: head/www/qt5-websockets/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	websockets
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol

USE_QT=		buildtools_build core network
USES=		qmake:norecursive qt-dist:5,websockets
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
