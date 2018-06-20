# Created by: Fotis Zabaras <fotis@zabaras.eu>
# $FreeBSD: head/net-mgmt/py-pyzabbix/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pyzabbix
PORTVERSION=	0.7.4
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fotis@zabaras.eu
COMMENT=	Zabbix API Python Library

LICENSE=	LGPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=1.0:www/py-requests@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
