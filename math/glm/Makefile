# Created by: demon@FreeBSD.org
# $FreeBSD: head/math/glm/Makefile 476929 2018-08-11 15:51:13Z fernape $

PORTNAME=	glm
PORTVERSION=	0.9.8.5
PORTREVISION=	2
PORTEPOCH=	1
CATEGORIES=	math graphics

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	C++ mathematics library for software based on the OpenGL GLSL

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/copying.txt

USES=		cmake:outsource compiler:c++11-lang pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	g-truc

NO_ARCH=	yes

OPTIONS_DEFINE=	TEST
TEST_CMAKE_BOOL=	GLM_TEST_ENABLE
TEST_TEST_TARGET=	test

.include <bsd.port.mk>
