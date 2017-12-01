# Created by: Fotis Zabaras <fotis@zabaras.eu>
# $FreeBSD: head/net-mgmt/py-pyzabbix/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pyzabbix
PORTVERSION=	0.7.4
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fotis@zabaras.eu
COMMENT=	Zabbix API Python Library

LICENSE=	LGPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=1.0:www/py-requests@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
