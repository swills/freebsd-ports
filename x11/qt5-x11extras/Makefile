# $FreeBSD: head/x11/qt5-x11extras/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	x11extras
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt platform-specific features for X11-based systems

USES=		compiler:c++11-lang qmake qt-dist:5,x11extras perl5
USE_QT=		core gui
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
