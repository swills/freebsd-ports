# $FreeBSD: head/sysutils/py-azure-cli-dla/Makefile 491291 2019-01-26 13:28:29Z dbaio $

PORTNAME=	azure-cli-dla
PORTVERSION=	0.2.3
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Microsoft Azure Command-Line Tools Data Lake Analytics Command Module

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}azure-mgmt-datalake-store>=0.5.0:devel/py-azure-mgmt-datalake-store@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-datalake-analytics>=0.2.0:devel/py-azure-mgmt-datalake-analytics@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-cli-core>=0:sysutils/py-azure-cli-core@${PY_FLAVOR}

USES=		azurepy python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
