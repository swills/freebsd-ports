# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/math/py-gmpy2/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	gmpy2
PORTVERSION=	2.0.8
PORTREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	GMP/MPIR, MPFR, and MPC interface to Python

LICENSE=	GPLv3

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpc.so:math/mpc \
		libmpfr.so:math/mpfr

USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/gmpy2.so

.include <bsd.port.mk>
