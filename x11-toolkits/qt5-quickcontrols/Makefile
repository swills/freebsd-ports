# $FreeBSD: head/x11-toolkits/qt5-quickcontrols/Makefile 459589 2018-01-21 11:46:47Z rakuco $

PORTNAME=	quickcontrols
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
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
