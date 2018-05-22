# $FreeBSD: head/comms/qt5-serialport/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	serialport
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access serial ports

USE_QT5=	core buildtools_build
QT_DIST=	serialport
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
