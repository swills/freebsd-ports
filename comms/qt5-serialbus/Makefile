# $FreeBSD: head/comms/qt5-serialbus/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	serialbus
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt functions to access industrial bus systems

USE_QT5=	core network serialport buildtools_build
QT_DIST=	serialbus
USES=		compiler:c++11-lib qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
