# $FreeBSD: head/devel/qt5-scripttools/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	scripttools
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	2
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
