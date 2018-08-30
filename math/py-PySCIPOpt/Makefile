# $FreeBSD: head/math/py-PySCIPOpt/Makefile 477410 2018-08-17 08:08:05Z yuri $

PORTNAME=	PySCIPOpt
DISTVERSION=	2.0.1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python interface and modeling environment for SCIP

LICENSE=	MIT

LIB_DEPENDS=	libscip.so:math/SCIP

USES=		localbase python
USE_PYTHON=	distutils cython autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/pyscipopt/scip.so

.include <bsd.port.mk>
