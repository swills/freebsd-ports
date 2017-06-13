# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/math/py-pyhull/Makefile 443032 2017-06-09 18:44:32Z sunpoet $

PORTNAME=	pyhull
PORTVERSION=	1.5.8
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
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
