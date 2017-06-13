# $FreeBSD: head/devel/py-gitpython/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	GitPython
PORTVERSION=	1.0.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	che@bein.link
COMMENT=	Python Git Library

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gitdb>=0.6.4:devel/py-gitdb
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose \
		${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock \
		${PYTHON_PKGNAMEPREFIX}gitdb>=0.6.4:devel/py-gitdb

USES=		python
USE_PYTHON=	autoplist distutils

regression-test: build
	cd ${WRKSRC} && ${PYTHON_CMD} -m nose

.include <bsd.port.mk>
