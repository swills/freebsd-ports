# $FreeBSD: head/devel/qt5-qdbus/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	qdbus
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt command-line interface to D-Bus

USES=		compiler:c++11-lang qmake qt-dist:5,tools
USE_QT=		core dbus xml buildtools_build

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

.include <bsd.port.mk>
