# $FreeBSD: head/devel/qt5-remoteobjects/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	remoteobjects
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 SXCML module

USES=		compiler:c++11-lang gl qmake qt-dist:5
USE_GL=		gl
USE_QT=		core declarative network \
		buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

.include <bsd.port.mk>
