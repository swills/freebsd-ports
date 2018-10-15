# $FreeBSD: head/x11/qt5-x11extras/Makefile 482034 2018-10-14 08:01:13Z tcberner $

PORTNAME=	x11extras
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt platform-specific features for X11-based systems

USE_QT=		core gui
USES=		compiler:c++11-lang qmake qt-dist:5,x11extras
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
