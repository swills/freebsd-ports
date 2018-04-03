# $FreeBSD: head/comms/qt5-sensors/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	sensors
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	comms
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt sensors module

USE_QT5=	core qml quick buildtools_build
QT_DIST=	${PORTNAME}
USES=		qmake:norecursive

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
