# $FreeBSD: head/devel/qt5-qdbus/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	qdbus
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt command-line interface to D-Bus

USE_QT5=	core dbus xml buildtools_build
QT_DIST=	tools
USES=		qmake

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

.include <bsd.port.mk>
