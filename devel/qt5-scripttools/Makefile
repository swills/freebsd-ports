# $FreeBSD: head/devel/qt5-scripttools/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	scripttools
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Script additional components

USES=		compiler:c++11-lang qmake qt-dist:5,script
USE_QT=		core gui script widgets buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${WRKSRC}/src/${PORTNAME}

.include <bsd.port.mk>
