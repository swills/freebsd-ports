# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/math/py-pyhull/Makefile 480772 2018-09-27 03:13:34Z yuri $

PORTNAME=	pyhull
DISTVERSION=	2015.2.1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Computation of convex hull, Delaunay triangulation and Voronoi diagram

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/pyhull/_pyhull.so

.include <bsd.port.mk>
