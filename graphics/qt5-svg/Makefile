# $FreeBSD: head/graphics/qt5-svg/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	svg
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt SVG support module

USE_QT=		core gui widgets buildtools_build
USES=		qmake qt-dist:5,svg
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
