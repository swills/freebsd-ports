# $FreeBSD: head/x11/qt5-x11extras/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	x11extras
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt platform-specific features for X11-based systems

USE_QT=		core gui
USES=		qmake qt-dist:5,x11extras
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
