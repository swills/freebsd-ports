# $FreeBSD: head/devel/qt5-location/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	location
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt location module

USE_QT5=	concurrent core dbus gui network qml quick buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake:norecursive

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
