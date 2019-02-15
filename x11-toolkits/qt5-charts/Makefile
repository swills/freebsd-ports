# $FreeBSD: head/x11-toolkits/qt5-charts/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	charts
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 charts module

USES=		compiler:c++11-lang qmake qt-dist:5,charts tar:xz
USE_QT=		core declarative network gui widgets designer \
		buildtools_build qmake_build

.include <bsd.port.mk>
