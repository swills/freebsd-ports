# $FreeBSD: head/devel/qt5-remoteobjects/Makefile 492793 2019-02-12 17:43:00Z tcberner $

PORTNAME=	remoteobjects
DISTVERSION=	${QT5_VERSION}
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
