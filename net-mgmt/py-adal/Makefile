# Created by: Johannes Jost Meixner <johannes@perceivon.net>
# $FreeBSD: head/net-mgmt/py-adal/Makefile 450973 2017-09-30 10:50:14Z tcberner $

PORTNAME=	adal
PORTVERSION=	0.4.7
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Authentication ot Azure Active Directory for python apps

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>0:security/py-cryptography \
		${PYTHON_PKGNAMEPREFIX}dateutil>=1.5:devel/py-dateutil \
		${PYTHON_PKGNAMEPREFIX}pyjwt>=1.0.0:www/py-pyjwt \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
