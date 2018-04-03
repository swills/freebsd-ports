# $FreeBSD: head/x11-toolkits/qt5-quickcontrols/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	quickcontrols
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	2
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of controls for building complete interfaces in Qt Quick

USE_QT5=	core gui qml quick widgets \
		buildtools_build
QT_DIST=	quickcontrols
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
