# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: head/devel/py-greenlet/Makefile 440746 2017-05-13 03:35:51Z linimon $

PORTNAME=	greenlet
PORTVERSION=	0.4.12
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Light-weight microthreads for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

NOT_FOR_ARCHS=		powerpc64
NOT_FOR_ARCHS_REASON=	greenlet needs to be ported to this platform

DO_MAKE_TEST=	${PYTHON_CMD}
TEST_TARGET=	run-tests.py
USE_PYTHON=	autoplist concurrent distutils
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/greenlet.so

.include <bsd.port.mk>
