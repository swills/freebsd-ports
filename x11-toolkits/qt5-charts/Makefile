# $FreeBSD: head/x11-toolkits/qt5-charts/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	charts
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 charts module

USES=		compiler:c++11-lang qmake qt-dist:5,charts tar:xz
USE_QT=		core declarative network gui widgets designer \
		buildtools_build qmake_build

.include <bsd.port.mk>
