# $FreeBSD: head/textproc/py-yapf/Makefile 448813 2017-08-27 09:00:27Z antoine $

PORTNAME=	yapf
PORTVERSION=	0.17.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Formatter for Python code

LICENSE=	APACHE20

NO_ARCH=	yes
USES=		python
USE_PYTHON=	concurrent distutils autoplist
DO_MAKE_TEST=	${SETENV} ${TEST_ENV} ${PYTHON_CMD} ${PYDISTUTILS_SETUP}
TEST_TARGET=	test

.include <bsd.port.mk>
