# Created by: Rick Miller
# $FreeBSD: head/databases/py-sispy/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	sispy
PORTVERSION=	1.1.0
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	vmiller@verisign.com
COMMENT=	Python client library for interacting with the SIS RESTful API

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
