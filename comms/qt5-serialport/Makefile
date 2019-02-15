# $FreeBSD: head/comms/qt5-serialport/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	serialport
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access serial ports

USES=		compiler:c++11-lang libtool qmake qt-dist:5,serialport
USE_QT=		core buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
