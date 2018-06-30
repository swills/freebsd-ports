# $FreeBSD: head/devel/qt5-uitools/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	uitools
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Designer UI forms support module

USE_QT=		core gui uiplugin widgets buildtools_build
USES=		qmake qt-dist:5,tools
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/designer/src/${PORTNAME}
INSTALL_WRKSRC=	${WRKSRC}/src/designer/src/${PORTNAME}

.include <bsd.port.mk>
