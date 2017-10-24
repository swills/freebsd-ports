# Created by: Tobias Kortkamp <t@tobik.me>
# $FreeBSD: head/textproc/cmark/Makefile 452695 2017-10-23 08:06:35Z tobik $

PORTNAME=	cmark
PORTVERSION=	0.28.3
CATEGORIES=	textproc

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	CommonMark parsing and rendering library and program in C

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource python:3,test
USE_GITHUB=	yes
GH_ACCOUNT=	commonmark
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_INSTALL_LIBDIR:STRING="lib"
PLIST_SUB=	VERSION=${PORTVERSION}
TEST_TARGET=	test

.include <bsd.port.mk>
