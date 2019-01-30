# $FreeBSD: head/devel/py-azure-mgmt-iothubprovisioningservices/Makefile 491291 2019-01-26 13:28:29Z dbaio $

PORTNAME=	azure-mgmt-iothubprovisioningservices
PORTVERSION=	0.2.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Microsoft Azure IoTHub Provisioning Services Client Library for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msrestazure>=0.4.20:net-mgmt/py-msrestazure@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-common>=1.1:www/py-azure-common@${PY_FLAVOR}

USES=		azurepy python zip
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
