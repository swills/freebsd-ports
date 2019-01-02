# $FreeBSD: head/devel/glslang/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	glslang
DISTVERSION=	6.2.2596-248
PORTREVISION=	1
DISTVERSIONSUFFIX=	-ge0bc65b
CATEGORIES=	devel graphics

MAINTAINER=	greg@unrelenting.technology
COMMENT=	OpenGL and OpenGL ES shader front end and validator

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKDIR}/LICENSE

USES=		cmake compiler:c++11-lib

USE_GITHUB=	yes
GH_ACCOUNT=	KhronosGroup

post-extract:
	${SED} '/^$$/,$$d' ${WRKSRC}/${PORTNAME}/Include/Types.h \
			>${WRKDIR}/LICENSE

.include <bsd.port.mk>
