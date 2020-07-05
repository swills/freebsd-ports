# $FreeBSD$

PORTNAME=	notcurses
DISTVERSIONPREFIX=	v
DISTVERSION=	${ABIVERSION}.6.0
CATEGORIES=	devel

MAINTAINER=	nickblack@linux.com
COMMENT=	TUI library for modern terminal emulators

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libavformat.so:multimedia/ffmpeg \
		libqrcodegen.so:graphics/qr-code-generator
BUILD_DEPENDS=	${LOCALBASE}/include/doctest/doctest.h:devel/doctest

USES=		cmake compiler:c++17-lang localbase \
		ncurses:port pkgconfig python:run shebangfix
USE_GITHUB=	yes
SHEBANG_FILES=	src/pydemo/notcurses-pydemo
GH_ACCOUNT=	dankamongmen
USE_LDCONFIG=	yes

LDFLAGS+=	-lc

CMAKE_OFF=	USE_PANDOC

ABIVERSION=	1

PLIST_SUB=	REL_VER=${DISTVERSION} ABI_VER=${ABIVERSION}

OPTIONS_DEFINE= PYTHON DOCS
OPTIONS_DEFAULT= PYTHON
PYTHON_CMAKE_BOOL= USE_PYTHON
PYTHON_BUILD_DEPENDS= ${PYTHON_PKGNAMEPREFIX}cffi>0:devel/py-cffi

PORTDOCS=	*

TEST_TARGET= test

.include <bsd.port.mk>
