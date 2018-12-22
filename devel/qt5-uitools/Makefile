# $FreeBSD: head/devel/qt5-uitools/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	uitools
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Designer UI forms support module

USES=		compiler:c++11-lang qmake qt-dist:5,tools
USE_QT=		core gui uiplugin widgets buildtools_build
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/designer/src/${PORTNAME}
INSTALL_WRKSRC=	${WRKSRC}/src/designer/src/${PORTNAME}

.include <bsd.port.mk>
