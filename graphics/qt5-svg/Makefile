# $FreeBSD: head/graphics/qt5-svg/Makefile 482034 2018-10-14 08:01:13Z tcberner $

PORTNAME=	svg
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt SVG support module

USE_QT=		core gui widgets buildtools_build
USES=		compiler:c++11-lang qmake qt-dist:5,svg
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
