# Created by: Ben Woods <woodsb02@FreeBSD.org>
# $FreeBSD: head/devel/py3-tox/Makefile 443061 2017-06-10 02:37:12Z woodsb02 $

MASTERDIR=	${.CURDIR}/../py-tox

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}virtualenv>=1.11.2:devel/py3-virtualenv \
		${PYTHON_PKGNAMEPREFIX}py>=1.4.17:devel/py3-py \
		${PYTHON_PKGNAMEPREFIX}pluggy>0:devel/py3-pluggy
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tox>0:devel/py3-tox \
		${PYTHON_PKGNAMEPREFIX}pytest>=2.3.5:devel/py3-pytest \
		${PYTHON_PKGNAMEPREFIX}pytest-timeout>0:devel/py3-pytest-timeout

USES=		python:3.3+

.include "${MASTERDIR}/Makefile"
