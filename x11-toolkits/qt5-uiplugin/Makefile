# $FreeBSD: head/x11-toolkits/qt5-uiplugin/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	uiplugin
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Custom Qt widget plugin interface for Qt Designer

USES=		compiler:c++17-lang qmake qt-dist:5,tools
USE_QT=		core gui widgets

BUILD_WRKSRC=   ${WRKSRC}/src/designer/src/${PORTNAME}
INSTALL_WRKSRC= ${WRKSRC}/src/designer/src/${PORTNAME}

.include <bsd.port.mk>
