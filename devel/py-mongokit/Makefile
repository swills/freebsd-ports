# Created by: Mirko Zinn <mail@derzinn.de>
# $FreeBSD: head/devel/py-mongokit/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	mongokit
PORTVERSION=	0.8.3
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mail@derzinn.de
COMMENT=	Python ORM-like layer on top of pymongo

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pymongo>=2.0.1:databases/pymongo@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
