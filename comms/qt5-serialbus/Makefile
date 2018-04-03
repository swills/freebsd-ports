# $FreeBSD: head/comms/qt5-serialbus/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	serialbus
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access industrial bus systems

USE_QT5=	core network serialport buildtools_build
QT_DIST=	serialbus
USES=		compiler:c++11-lib qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
