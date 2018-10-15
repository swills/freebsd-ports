# $FreeBSD: head/x11-toolkits/qt5-quickcontrols/Makefile 482034 2018-10-14 08:01:13Z tcberner $

PORTNAME=	quickcontrols
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of controls for building complete interfaces in Qt Quick

BROKEN_armv6=		fails to install: pkg-static: Unable to access file ApplicationWindow.qmlc: No such file or directory

USES=		compiler:c++11-lang qmake qt-dist:5,quickcontrols
USE_QT=		core gui qml quick widgets \
		buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
