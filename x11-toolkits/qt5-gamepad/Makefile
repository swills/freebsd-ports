# $FreeBSD: head/x11-toolkits/qt5-gamepad/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	gamepad
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Gamepad Module

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,gamepad
USE_QT=		core declarative gui buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
