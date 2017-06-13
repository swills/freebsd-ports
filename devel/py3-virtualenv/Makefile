# Created by: Ben Woods <woodsb02@FreeBSD.org>
# $FreeBSD: head/devel/py3-virtualenv/Makefile 443049 2017-06-10 01:50:05Z woodsb02 $

MASTERDIR=	${.CURDIR}/../py-virtualenv

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py3-pytest \
		${PYTHON_PKGNAMEPREFIX}mock>0:devel/py3-mock

DOCS_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sphinx>=1.1.3:textproc/py3-sphinx

USES=		python:3.3+

.include "${MASTERDIR}/Makefile"
