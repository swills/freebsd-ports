# Created by: Johannes Jost Meixner <johannes@FreeBSD.org>
# $FreeBSD: head/net-mgmt/py-msrestazure/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	msrestazure
PORTVERSION=	0.4.8
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Azure-specific AutoRest swagger generator Python client runtime

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}keyring>0:security/py-keyring@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}msrest>0:net-mgmt/py-msrest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}adal>0:net-mgmt/py-adal@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
