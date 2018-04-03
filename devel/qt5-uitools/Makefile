# $FreeBSD: head/devel/qt5-uitools/Makefile 465911 2018-03-29 19:03:17Z tcberner $

PORTNAME=	uitools
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
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
