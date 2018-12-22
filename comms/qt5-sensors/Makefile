# $FreeBSD: head/comms/qt5-sensors/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	sensors
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt sensors module

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,sensors
USE_QT=		core declarative buildtools_build

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
