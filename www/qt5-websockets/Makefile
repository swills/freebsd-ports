# $FreeBSD: head/www/qt5-websockets/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	websockets
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	2
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,websockets
USE_QT=		buildtools_build core network
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
