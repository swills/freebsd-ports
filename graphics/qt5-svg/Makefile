# $FreeBSD: head/graphics/qt5-svg/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	svg
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt SVG support module

USE_QT5=	core gui widgets buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
