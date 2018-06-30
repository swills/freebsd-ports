# $FreeBSD: head/devel/qt5-qdbus/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qdbus
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt command-line interface to D-Bus

USES=		qmake qt-dist:5,tools
USE_QT=		core dbus xml buildtools_build

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

.include <bsd.port.mk>
