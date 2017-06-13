# Created by: Ben Woods <woodsb02@FreeBSD.org>
# $FreeBSD: head/security/py3-openssl/Makefile 442842 2017-06-07 14:37:28Z woodsb02 $

MASTERDIR=	${.CURDIR}/../py-openssl

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>=0.2.1:security/py3-cryptography \
		${PYTHON_PKGNAMEPREFIX}six>=1.5.2:devel/py3-six

USES=		cpe python:3.3+

.include "${MASTERDIR}/Makefile"
