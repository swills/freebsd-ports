# $FreeBSD: head/comms/qt5-serialport/Makefile 482034 2018-10-14 08:01:13Z tcberner $

PORTNAME=	serialport
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access serial ports

USE_QT=		core buildtools_build
USES=		compiler:c++11-lang libtool qmake qt-dist:5,serialport
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
