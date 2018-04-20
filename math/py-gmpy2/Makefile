# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/math/py-gmpy2/Makefile 467751 2018-04-19 07:08:45Z ale $

PORTNAME=	gmpy2
PORTVERSION=	2.0.8
PORTREVISION=	3
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	GMP/MPIR, MPFR, and MPC interface to Python

LICENSE=	GPLv3

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpc.so:math/mpc \
		libmpfr.so:math/mpfr

USES=		python zip
USE_PYTHON=	distutils autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/gmpy2.so

.include <bsd.port.mk>
