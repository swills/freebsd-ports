# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/net/py-beanstalkc/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	beanstalkc
PORTVERSION=	0.4.0
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Simple beanstalkd client library for Python

LICENSE=	APACHE20

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>0:devel/py-yaml@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=		YAML
OPTIONS_DEFAULT=	YAML
YAML_DESC=		YAML response parsing support

YAML_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>0:devel/py-yaml@${PY_FLAVOR}

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
