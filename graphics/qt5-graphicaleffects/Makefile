# $FreeBSD: head/graphics/qt5-graphicaleffects/Makefile 474153 2018-07-08 01:51:36Z linimon $

PORTNAME=	graphicaleffects
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Quick graphical effects

BROKEN_armv6=		fails to install: pkg-static: Unable to access file DropShadowBase.qmlc: No such file or directory

USES=		qmake qt-dist:5,graphicaleffects
USE_QT=		buildtools_build core gui quick qml

.include <bsd.port.mk>
