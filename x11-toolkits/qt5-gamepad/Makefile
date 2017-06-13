# $FreeBSD: head/x11-toolkits/qt5-gamepad/Makefile 434380 2017-02-18 19:48:05Z tcberner $

PORTNAME=	gamepad
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Gamepad Module

USE_QT5=	core gui qml quick buildtools_build
QT_DIST=	${PORTNAME}

USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
