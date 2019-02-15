# $FreeBSD: head/graphics/qt5-svg/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	svg
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt SVG support module

USES=		compiler:c++11-lang qmake qt-dist:5,svg
USE_QT=		core gui widgets buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
