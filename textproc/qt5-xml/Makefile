# $FreeBSD: head/textproc/qt5-xml/Makefile 470288 2018-05-18 12:27:43Z rakuco $

PORTNAME=	xml
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	textproc
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt SAX and DOM implementations

USE_QT5=	core qmake_build buildtools_build
QT_DIST=	base
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	-no-gui -no-xcb
USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=	${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC=	${BUILD_WRKSRC}

post-configure:
.for d in src/xml
	${MKDIR} ${WRKSRC}/${d}
	cd ${WRKSRC}/${d} && ${SETENV} ${QMAKE_ENV} ${_QMAKE} ${QMAKE_ARGS} ${WRKSRC}/${d}
.endfor

.include <bsd.port.mk>
