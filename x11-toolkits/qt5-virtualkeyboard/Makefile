# $FreeBSD: head/x11-toolkits/qt5-virtualkeyboard/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	virtualkeyboard
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Virtual Keyboard Module

USE_QT5=	core network gui widgets svg qml quick buildtools_build
QT_DIST=	${PORTNAME}

USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
