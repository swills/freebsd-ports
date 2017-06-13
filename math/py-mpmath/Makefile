# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/math/py-mpmath/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	mpmath
PORTVERSION=	0.19
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python Library for Arbitrary-precision Floating-point Arithmetic

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/gmpy.so:math/py-gmpy

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
