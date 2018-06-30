# $FreeBSD: head/comms/qt5-sensors/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	sensors
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt sensors module

USE_QT=		core qml quick buildtools_build
USES=		qmake:norecursive qt-dist:5,sensors

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
