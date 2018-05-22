# $FreeBSD: head/x11-toolkits/qt5-quickcontrols/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	quickcontrols
DISTVERSION=	${QT5_VERSION}
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
