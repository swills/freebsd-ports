# $FreeBSD: head/security/py-gpgme/Makefile 461063 2018-02-06 15:18:23Z jhale $

PORTREVISION=	1
CATEGORIES=	security python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Gpgme Python bindings

MASTERDIR=	${.CURDIR}/../../security/gpgme
SLAVEPORT=	python
BINDING_NAME=	python
PLIST=		${.CURDIR}/pkg-plist

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/${PYTHON_VERSION}/site-packages/gpg/_gpgme.so

.include "${MASTERDIR}/Makefile"
