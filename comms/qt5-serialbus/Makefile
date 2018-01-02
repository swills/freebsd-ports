# $FreeBSD: head/comms/qt5-serialbus/Makefile 457773 2018-01-01 13:13:55Z rakuco $

PORTNAME=	serialbus
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	3
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access industrial bus systems

USE_QT5=	core network serialport buildtools_build
QT_DIST=	serialbus
USES=		compiler:c++11-lib qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
