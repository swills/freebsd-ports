# $FreeBSD: head/science/pcmsolver/Makefile 454184 2017-11-14 18:05:42Z yuri $

PORTNAME=	pcmsolver
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.11
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	API for the Polarizable Continuum Model

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:outsource fortran python
USE_GITHUB=	yes
GH_ACCOUNT=	PCMSolver
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|"-O3 |"$${CMAKE_C_FLAGS} |' \
		${WRKSRC}/cmake/custom/compilers/*.cmake

.include <bsd.port.mk>
