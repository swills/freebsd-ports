# $FreeBSD: head/x11/qt5-x11extras/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	x11extras
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt platform-specific features for X11-based systems

USE_QT5=	core gui
QT_DIST=	x11extras
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
