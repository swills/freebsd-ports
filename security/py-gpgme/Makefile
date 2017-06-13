# $FreeBSD: head/security/py-gpgme/Makefile 427185 2016-11-26 23:41:16Z jhale $

PORTREVISION=	0
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
