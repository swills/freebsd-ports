# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/net/py-amqp/Makefile 457823 2018-01-02 00:50:27Z olgeni $

PORTNAME=	amqp
PORTVERSION=	2.2.2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Low-level AMQP client for Python (fork of amqplib)

LICENSE=	LGPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}vine>0:devel/py-vine@${FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}coverage>0:devel/py-coverage@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mock>0:devel/py-mock@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

regression-test: build
	@cd ${WRKSRC}/funtests && ${SETENV} PYTHONPATH=../ ${PYTHON_CMD} run_all.py

.include <bsd.port.mk>
