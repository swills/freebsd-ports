# $FreeBSD: head/x11-toolkits/qt5-gamepad/Makefile 483125 2018-10-27 11:50:58Z tcberner $

PORTNAME=	gamepad
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Gamepad Module

USE_QT=		core gui qml quick buildtools_build

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,gamepad
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
