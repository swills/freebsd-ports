# $FreeBSD: head/devel/qt5-scxml/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	scxml
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 SXCML module

USE_QT5=	core network qml buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
