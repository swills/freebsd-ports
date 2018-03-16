# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/science/py-scikit-sparse/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	scikit-sparse
PORTVERSION=	0.2
PORTREVISION=	5
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	scikits.sparse-${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Sparse matrix package

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_SITELIBDIR}/scipy/version.py:science/py-scipy@${FLAVOR}
BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libumfpack.so:math/suitesparse

USES=		fortran python
USE_PYTHON=	autoplist distutils cython

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-shared

.include <bsd.port.mk>
