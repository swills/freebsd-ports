# Created by: lbartoletti <lbartoletti@tuxfamily.org>
# $FreeBSD: head/graphics/py-graphviz/Makefile 477406 2018-08-17 02:24:03Z wen $

PORTNAME=	graphviz
PORTVERSION=	0.8.4
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Simple Python interface for Graphviz

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	dot:graphics/graphviz
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-cov>=0:devel/py-pytest-cov@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-mock>=0:devel/py-pytest-mock@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python zip
USE_PYTHON=	autoplist concurrent distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} run-tests.py

.include <bsd.port.mk>
