# $FreeBSD: head/www/qt5-websockets/Makefile 482587 2018-10-20 16:17:18Z tcberner $

PORTNAME=	websockets
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol

USE_QT=		buildtools_build core network
USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,websockets
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
