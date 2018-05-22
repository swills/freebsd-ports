# $FreeBSD: head/graphics/qt5-svg/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	svg
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt SVG support module

USE_QT5=	core gui widgets buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
