# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: head/mail/py-dkimpy/Makefile 476306 2018-08-03 16:27:03Z swills $

PORTNAME=	dkimpy
DISTVERSION=	0.8.1
CATEGORIES=	mail python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Python library for DKIM email signing and verification

LICENSE=	ZLIB

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}authres>=0:mail/py-authres@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dnspython>=0:dns/py-dnspython@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pynacl>=0:security/py-pynacl@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist concurrent
NO_ARCH=	yes

.include <bsd.port.mk>
