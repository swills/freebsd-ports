# $FreeBSD: head/www/qt5-websockets/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	websockets
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,websockets
USE_QT=		buildtools_build core network
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
