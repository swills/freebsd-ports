# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/math/py-graphillion/Makefile 481437 2018-10-07 09:57:10Z koobs $

PORTNAME=	graphillion
PORTVERSION=	1.2
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:S/g/G/}-${PORTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Fast, lightweight graphset operation library in Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>0:devel/py-future@${PY_FLAVOR}

# Python 2.7,3.4+
USES=		python
USE_PYTHON=	distutils autoplist

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/_graphillion.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
