# $FreeBSD: head/devel/qt5-uitools/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	uitools
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Designer UI forms support module

USE_QT5=	core gui uiplugin widgets buildtools_build
QT_DIST=	tools
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/designer/src/${PORTNAME}
INSTALL_WRKSRC=	${WRKSRC}/src/designer/src/${PORTNAME}

.include <bsd.port.mk>
