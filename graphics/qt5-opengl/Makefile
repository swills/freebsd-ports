# $FreeBSD: head/graphics/qt5-opengl/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	opengl
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5-compatible OpenGL support module

USE_GL=		gl
USE_QT5=	core gui widgets qmake_build buildtools_build
QT_DIST=	base
HAS_CONFIGURE=	yes
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

QT_DEFINES=	OPENGL
QT_CONFIG=	opengl

.include <bsd.port.mk>
