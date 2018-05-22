# $FreeBSD: head/www/qt5-websockets/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	websockets
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol

USE_QT5=	buildtools_build core network
QT_DIST=	${PORTNAME}
USES=		qmake:norecursive
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
