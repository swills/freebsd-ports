# $FreeBSD: head/x11-toolkits/qt5-gamepad/Makefile 458293 2018-01-06 21:30:31Z rakuco $

PORTNAME=	gamepad
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Gamepad Module

USE_QT5=	core gui qml quick buildtools_build
QT_DIST=	${PORTNAME}

USES=		qmake:norecursive
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
