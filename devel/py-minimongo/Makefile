# Created by: Mirko Zinn <mail@derzinn.de>
# $FreeBSD: head/devel/py-minimongo/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	minimongo
PORTVERSION=	0.2.7
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP \
		http://files.derzinn.de/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mail@derzinn.de
COMMENT=	Minimal database Model management for MongoDB

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pymongo>=1.9:databases/pymongo@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
