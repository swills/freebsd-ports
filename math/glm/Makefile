# Created by: demon@FreeBSD.org
# $FreeBSD: head/math/glm/Makefile 455508 2017-12-04 11:32:28Z amdmi3 $

PORTNAME=	glm
PORTVERSION=	0.9.8.5
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
