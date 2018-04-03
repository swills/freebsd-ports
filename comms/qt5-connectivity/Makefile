# $FreeBSD: head/comms/qt5-connectivity/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	connectivity
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt connectivity (Bluetooth/NFC) module

USE_QT5=	concurrent core qml quick buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
