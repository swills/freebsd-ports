# Created by: demon@FreeBSD.org
# $FreeBSD: head/math/glm/Makefile 455034 2017-11-28 11:46:54Z amdmi3 $

PORTNAME=	glm
PORTVERSION=	0.9.8.4
PORTEPOCH=	1
CATEGORIES=	math graphics

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	C++ mathematics library for software based on the OpenGL GLSL

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/copying.txt

USE_GITHUB=	yes
GH_ACCOUNT=	g-truc

NO_ARCH=	yes

USES=		cmake:outsource pkgconfig

OPTIONS_DEFINE=	TEST
TEST_CMAKE_BOOL=	GLM_TEST_ENABLE
TEST_TEST_TARGET=	test

.include <bsd.port.mk>
