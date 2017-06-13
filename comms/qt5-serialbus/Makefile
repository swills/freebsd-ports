# $FreeBSD: head/comms/qt5-serialbus/Makefile 437439 2017-04-01 15:23:30Z gerald $

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

BUILD_WRKSRC=	${WRKSRC}/src/serialbus
INSTALL_WRKSRC=	${BUILD_WRKSRC}

.include <bsd.port.mk>
