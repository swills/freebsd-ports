# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/science/py-scikit-sparse/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	scikit-sparse
DISTVERSION=	0.4.3
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Sparse matrix package

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR}
BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libumfpack.so:math/suitesparse

USES=		fortran python
USE_PYTHON=	distutils cython autoplist

CFLAGS+=	-I${LOCALBASE}/include/suitesparse
LDFLAGS+=	-shared

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/sksparse/cholmod.so

.include <bsd.port.mk>
