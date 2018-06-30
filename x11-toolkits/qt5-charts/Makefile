# $FreeBSD: head/x11-toolkits/qt5-charts/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	charts
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 charts module

USES=		qmake qt-dist:5,charts tar:xz
USE_QT=		core network gui widgets qml quick designer \
		buildtools_build qmake_build

.include <bsd.port.mk>
