# $FreeBSD: head/devel/qt5-scripttools/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	scripttools
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Script additional components

USE_QT5=	core gui script widgets buildtools_build
QT_DIST=	script
USES=		qmake
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${WRKSRC}/src/${PORTNAME}

.include <bsd.port.mk>
