# $FreeBSD: head/graphics/qt5-opengl/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	opengl
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	graphics
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5-compatible OpenGL support module

USES=		qmake:no_env qt-dist:5,base
USE_GL=		gl
USE_QT=		core gui widgets qmake_build buildtools_build
HAS_CONFIGURE=	yes
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

QT_DEFINES=	OPENGL
QT_CONFIG=	opengl

post-configure:
.for d in src/opengl
	${MKDIR} ${WRKSRC}/${d}
	cd ${WRKSRC}/${d} && ${SETENV} ${QMAKE_ENV} ${_QMAKE} ${QMAKE_ARGS} ${WRKSRC}/${d}
.endfor

.include <bsd.port.mk>
