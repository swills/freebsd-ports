# $FreeBSD: head/comms/qt5-sensors/Makefile 458293 2018-01-06 21:30:31Z rakuco $

PORTNAME=	sensors
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt sensors module

USE_QT5=	core qml quick buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake:norecursive

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
