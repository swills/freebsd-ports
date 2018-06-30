# $FreeBSD: head/x11-toolkits/qt5-gamepad/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	gamepad
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Gamepad Module

USE_QT=		core gui qml quick buildtools_build

USES=		qmake:norecursive qt-dist:5,gamepad
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
