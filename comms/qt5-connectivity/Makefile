# $FreeBSD: head/comms/qt5-connectivity/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	connectivity
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt connectivity (Bluetooth/NFC) module

USES=		compiler:c++11-lang qmake qt-dist:5,connectivity
USE_QT=		concurrent core declarative buildtools_build

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
