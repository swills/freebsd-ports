# Created by: Ben Woods <woodsb02@FreeBSD.org>
# $FreeBSD: head/devel/py3-mock/Makefile 443064 2017-06-10 02:52:09Z woodsb02 $

MASTERDIR=	${.CURDIR}/../py-mock

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbr>=1.3:devel/py3-pbr \
		${PYTHON_PKGNAMEPREFIX}six>=1.9:devel/py3-six
TESTS_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tox>0:devel/py3-tox

USES=		python:3.2+

.include "${MASTERDIR}/Makefile"
