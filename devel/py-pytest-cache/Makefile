# Created by: Fukang Chen <loader@FreeBSD.org>
# $FreeBSD: head/devel/py-pytest-cache/Makefile 448633 2017-08-23 17:45:54Z antoine $

PORTNAME=	pytest-cache
PORTVERSION=	1.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	loader@FreeBSD.org
COMMENT=	Pytest plugin with mechanisms for caching across test runs

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=2.2:devel/py-pytest \
		${PYTHON_PKGNAMEPREFIX}execnet>=1.2:sysutils/py-execnet
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils
DO_MAKE_TEST=	${SETENV} ${TEST_ENV} ${PYTHON_CMD} ${PYDISTUTILS_SETUP}
TEST_TARGET=	test

.include <bsd.port.mk>
