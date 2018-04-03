# $FreeBSD: head/devel/qt5-location/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	location
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt location module

USE_QT5=	concurrent core dbus gui network qml quick buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake:norecursive

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
