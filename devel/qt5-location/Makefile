# $FreeBSD: head/devel/qt5-location/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	location
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt location module

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,location
USE_QT=		concurrent core dbus declarative gui network buildtools_build

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
