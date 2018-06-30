# $FreeBSD: head/comms/qt5-serialbus/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	serialbus
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access industrial bus systems

USE_QT=		core network serialport buildtools_build
USES=		compiler:c++11-lib qmake qt-dist:5,serialbus
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
