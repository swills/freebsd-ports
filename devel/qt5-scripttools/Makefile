# $FreeBSD: head/devel/qt5-scripttools/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	scripttools
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt Script additional components

USE_QT=		core gui script widgets buildtools_build
USES=		qmake qt-dist:5,script
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${WRKSRC}/src/${PORTNAME}

.include <bsd.port.mk>
