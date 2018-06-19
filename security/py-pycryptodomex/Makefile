# $FreeBSD: head/security/py-pycryptodomex/Makefile 472640 2018-06-17 21:44:44Z yuri $

PKGNAMESUFFIX=	x

CONFLICTS_INSTALL=

MASTERDIR=	${.CURDIR}/../py-pycryptodome

NAMESPACE=	Cryptodome

pre-build:
	@${TOUCH} ${WRKSRC}/.separate_namespace

.include "${MASTERDIR}/Makefile"
