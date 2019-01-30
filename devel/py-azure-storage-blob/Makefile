# $FreeBSD: head/devel/py-azure-storage-blob/Makefile 491291 2019-01-26 13:28:29Z dbaio $

PORTNAME=	azure-storage-blob
PORTVERSION=	1.4.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Microsoft Azure Storage Blob Client Library for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}azure-common>=1.1.5:www/py-azure-common@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-storage-common>=1.4:devel/py-azure-storage-common@${PY_FLAVOR} \
		${PY_FUTURES}

USES=		azurepy python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
