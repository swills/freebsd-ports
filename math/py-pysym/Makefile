# $FreeBSD: head/math/py-pysym/Makefile 466022 2018-03-31 06:24:27Z yuri $

PORTNAME=	pysym
DISTVERSION=	0.2.3
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Prototype package for symbolic manipulation

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sympy>0:math/py-sympy@${FLAVOR} \
		${PYNUMPY}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
