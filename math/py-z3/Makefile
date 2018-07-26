# $FreeBSD: head/math/py-z3/Makefile 475328 2018-07-25 19:14:54Z yuri $

PORTNAME=	z3
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	4.7.1
CATEGORIES=	math
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python binding for Z3 Theorem Prover

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/../../../LICENSE.txt

# CAVEAT: It should have LIB_DEPENDS=libz3.so:math/z3, but currently it rebuilds all code, see https://github.com/Z3Prover/z3/issues/1767

USES=		python
USE_GITHUB=	yes
GH_ACCOUNT=	Z3Prover
GH_PROJECT=	z3
USE_PYTHON=	distutils autoplist

WRKSRC_SUBDIR=	src/api/python

.include <bsd.port.mk>
