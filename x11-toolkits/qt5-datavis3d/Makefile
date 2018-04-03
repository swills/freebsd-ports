# $FreeBSD: head/x11-toolkits/qt5-datavis3d/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	datavis3d
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 3D data visualization module

USE_QT5=	core network gui widgets qml quick designer buildtools_build
QT_DIST=	${PORTNAME}

USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
