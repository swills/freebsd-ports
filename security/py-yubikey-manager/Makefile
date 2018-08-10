# $FreeBSD$

PORTNAME=	yubikey-manager
PORTVERSION=	0.7.1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ndowens@yahoo.com
COMMENT=	Python library and command line tool for configuring a YubiKey

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyscard>0:security/py-pyscard@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}usb>0:devel/py-usb@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fido2>0:security/py-fido2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>0:security/py-openssl@${PY_FLAVOR} \
		ykpers>0:security/ykpers

USES=		python:2.7
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
