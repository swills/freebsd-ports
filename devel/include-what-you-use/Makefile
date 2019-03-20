# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/devel/include-what-you-use/Makefile 495405 2019-03-12 01:05:27Z linimon $

PORTNAME=	include-what-you-use
PORTVERSION=	0.10
CATEGORIES=	devel

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Tool for use with clang to analyze #includes in C and C++ source files

LICENSE=	NCSA
LICENSE_FILE=	${WRKSRC}/LICENSE.TXT

BUILD_DEPENDS=	clang60:devel/llvm60
RUN_DEPENDS=	clang60:devel/llvm60

USES=		cmake compiler:c++11-lang ncurses python:run shebangfix
USE_GITHUB=	yes

SHEBANG_FILES=	fix_includes.py \
		iwyu_tool.py

GH_TAGNAME=	clang_6.0

CMAKE_ARGS+=	-DIWYU_LLVM_INCLUDE_PATH=${LOCALBASE}/llvm60/include \
		-DIWYU_LLVM_LIB_PATH=${LOCALBASE}/llvm60/lib

.include <bsd.port.mk>
