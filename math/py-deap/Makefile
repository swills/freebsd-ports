# $FreeBSD: head/math/py-deap/Makefile 486829 2018-12-07 07:46:13Z yuri $

PORTNAME=	deap
DISTVERSION=	1.2.2
CATEGORIES=	math biology science devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Distributed Evolutionary Algorithms in Python

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USES=		python:3.5+
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
