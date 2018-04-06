# $FreeBSD: head/math/py-pyodesys/Makefile 466537 2018-04-05 05:53:35Z yuri $

PORTNAME=	pyodesys
DISTVERSION=	0.11.10
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Straightforward numerical integration of ODE systems from Python

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=2.0.2:math/py-matplotlib@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.19.1:science/py-scipy@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sym>=0.3.0:math/py-sym@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sympy>=1.1.1:math/py-sympy@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
