# $FreeBSD: head/comms/qt5-sensors/Makefile 484140 2018-11-04 19:00:53Z tcberner $

PORTNAME=	sensors
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt sensors module

USE_QT=		core declarative buildtools_build
USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,sensors

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
