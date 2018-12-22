# $FreeBSD: head/devel/qt5-location/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	location
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt location module

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,location
USE_QT=		concurrent core dbus declarative gui network buildtools_build

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
