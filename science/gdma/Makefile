# $FreeBSD: head/science/gdma/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	gdma
DISTVERSIONPREFIX=	v
DISTVERSION=	2.2.6
PORTREVISION=	3
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Anthony Stone's Gaussian Distributed Multipole Analysis

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:outsource fortran
USE_GITHUB=	yes
GH_ACCOUNT=	psi4
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DBUILD_SHARED_LIBS:BOOL=ON \
		-DENABLE_XHOST:BOOL=OFF \
		-DENABLE_OPENMP:BOOL=ON

.include <bsd.port.mk>
