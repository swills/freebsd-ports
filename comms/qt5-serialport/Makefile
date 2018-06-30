# $FreeBSD: head/comms/qt5-serialport/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	serialport
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access serial ports

USE_QT=		core buildtools_build
USES=		qmake qt-dist:5,serialport
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
