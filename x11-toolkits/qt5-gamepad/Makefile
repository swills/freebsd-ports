# $FreeBSD: head/x11-toolkits/qt5-gamepad/Makefile 484140 2018-11-04 19:00:53Z tcberner $

PORTNAME=	gamepad
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Gamepad Module

USE_QT=		core declarative gui buildtools_build

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,gamepad
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
