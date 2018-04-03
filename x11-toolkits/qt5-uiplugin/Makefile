# $FreeBSD: head/x11-toolkits/qt5-uiplugin/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	uiplugin
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Custom Qt widget plugin interface for Qt Designer

USE_QT5=	core gui widgets
QT_DIST=	tools
USES=		qmake

BUILD_WRKSRC=   ${WRKSRC}/src/designer/src/${PORTNAME}
INSTALL_WRKSRC= ${WRKSRC}/src/designer/src/${PORTNAME}

.include <bsd.port.mk>
