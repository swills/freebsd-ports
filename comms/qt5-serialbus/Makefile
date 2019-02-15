# $FreeBSD: head/comms/qt5-serialbus/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	serialbus
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access industrial bus systems

USES=		compiler:c++11-lib qmake qt-dist:5,serialbus
USE_QT=		core network serialport buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
