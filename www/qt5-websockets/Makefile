# $FreeBSD: head/www/qt5-websockets/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	websockets
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt implementation of WebSocket protocol

USE_QT5=	buildtools_build core network
QT_DIST=	${PORTNAME}
USES=		qmake:norecursive
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
