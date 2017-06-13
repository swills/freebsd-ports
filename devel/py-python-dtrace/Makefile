# $FreeBSD: head/devel/py-python-dtrace/Makefile 435080 2017-02-28 19:50:04Z swills $

PORTNAME=	python-dtrace
PORTVERSION=	0.0.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gcj21@cl.cam.ac.uk
COMMENT=	DTrace consumer for Python based on libdtrace

LICENSE=	MIT

BUILD_DEPENDS=	cython:lang/cython
RUN_DEPENDS=	cython:lang/cython

USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
