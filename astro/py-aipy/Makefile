# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/astro/py-aipy/Makefile 457757 2018-01-01 09:05:38Z wen $

PORTNAME=	aipy
PORTVERSION=	2.1.8
PORTREVISION=	1
CATEGORIES=	astro python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Astronomical Interferometry in PYthon

LICENSE=	GPLv2+

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}pyephem>=0:astro/pyephem@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}astropy>=1.0:astro/py-astropy@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=0.98:math/py-matplotlib@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
