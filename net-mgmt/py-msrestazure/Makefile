# Created by: Johannes Jost Meixner <johannes@FreeBSD.org>
# $FreeBSD: head/net-mgmt/py-msrestazure/Makefile 450975 2017-09-30 11:09:19Z tcberner $

PORTNAME=	msrestazure
PORTVERSION=	0.4.8
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xmj@FreeBSD.org
COMMENT=	Azure-specific AutoRest swagger generator Python client runtime

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}keyring>0:security/py-keyring \
		${PYTHON_PKGNAMEPREFIX}msrest>0:net-mgmt/py-msrest \
		${PYTHON_PKGNAMEPREFIX}adal>0:net-mgmt/py-adal

USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
