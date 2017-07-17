# $FreeBSD: head/textproc/py-yapf/Makefile 445701 2017-07-13 18:34:38Z antoine $

PORTNAME=	yapf
PORTVERSION=	0.16.3
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Formatter for Python code

LICENSE=	APACHE20

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist
DO_MAKE_TEST=	${SETENV} ${TEST_ENV} ${PYTHON_CMD} ${PYDISTUTILS_SETUP}
TEST_TARGET=	test

.include <bsd.port.mk>
