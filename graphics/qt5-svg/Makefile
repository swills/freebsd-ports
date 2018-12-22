# $FreeBSD: head/graphics/qt5-svg/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	svg
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt SVG support module

USES=		compiler:c++11-lang qmake qt-dist:5,svg
USE_QT=		core gui widgets buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
