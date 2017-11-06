# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/math/py-pybloom/Makefile 453432 2017-11-03 20:30:46Z dvl $

PORTNAME=	pybloom
PORTVERSION=	2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	math python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Probabilistic data structure

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}bitarray>0:devel/py-bitarray

USES=		python
USE_PYTHON=	distutils autoplist

USE_GITHUB=     yes
GH_ACCOUNT=     jaybaird
GH_PROJECT=	python-bloomfilter

.include <bsd.port.mk>
