# Created by: Ben Woods <woodsb02@FreeBSD.org>
# $FreeBSD: head/net/py3-urllib3/Makefile 446339 2017-07-21 17:30:25Z sunpoet $

MASTERDIR=	${.CURDIR}/../py-urllib3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>=1.3.4:security/py3-cryptography \
		${PYTHON_PKGNAMEPREFIX}idna>=2.0:dns/py3-idna \
		${PYTHON_PKGNAMEPREFIX}openssl>=16.0:security/py3-openssl \
		${PYTHON_PKGNAMEPREFIX}pysocks>=1.5.7:net/py3-pysocks

PORTSCOUT=	ignore:1

USES=		python:3.3+

.include "${MASTERDIR}/Makefile"

