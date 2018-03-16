# $FreeBSD: head/science/pcmsolver/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	pcmsolver
DISTVERSIONPREFIX=	v
DISTVERSION=	1.1.11
PORTREVISION=	1
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
