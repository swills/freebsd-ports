# $FreeBSD: head/x11-toolkits/qt5-gamepad/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	gamepad
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Gamepad Module

USE_QT5=	core gui qml quick buildtools_build
QT_DIST=	${PORTNAME}

USES=		qmake:norecursive
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
