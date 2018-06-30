# $FreeBSD: head/x11-toolkits/qt5-quickcontrols/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	quickcontrols
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Set of controls for building complete interfaces in Qt Quick

USES=		qmake qt-dist:5,quickcontrols
USE_QT=		core gui qml quick widgets \
		buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
