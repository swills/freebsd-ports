# $FreeBSD: head/science/gdma/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	gdma
DISTVERSIONPREFIX=	v
DISTVERSION=	2.2.6
PORTREVISION=	1
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
