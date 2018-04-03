# $FreeBSD: head/x11-toolkits/qt5-charts/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	charts
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 charts module

USES=		qmake tar:xz
USE_QT5=	core network gui widgets qml quick designer \
		buildtools_build qmake_build
QT_DIST=	${PORTNAME}

.include <bsd.port.mk>
