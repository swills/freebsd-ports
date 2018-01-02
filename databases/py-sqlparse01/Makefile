# Created by: Axel Rau <axel.rau@chaos1.de>
# $FreeBSD: head/databases/py-sqlparse01/Makefile 456245 2017-12-13 20:50:04Z sunpoet $

PORTNAME=	sqlparse01
PORTVERSION=	0.1.19
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	sqlparse-${DISTVERSION}

MAINTAINER=	axel.rau@chaos1.de
COMMENT=	Non-validating SQL parser for Python

LICENSE=	BSD3CLAUSE

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}sqlparse ${PYTHON_PKGNAMEPREFIX}sqlparse020

.include <bsd.port.mk>
