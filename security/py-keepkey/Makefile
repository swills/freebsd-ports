# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/security/py-keepkey/Makefile 496044 2019-03-17 10:46:05Z ehaupt $

PORTNAME=	keepkey
PORTVERSION=	6.0.3
CATEGORIES=	security
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Library for communicating with KeepKey Hardware Wallet

LICENSE=	LGPL3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ecdsa>=0.9:security/py-ecdsa@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}protobuf>=3.0.0:devel/py-protobuf@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mnemonic>=0.8:security/py-mnemonic@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}hidapi>=0.7.99.post15:comms/py-hidapi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}libusb1>=1.6:devel/py-libusb1@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
