# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-repoze.tm2/Makefile 429347 2016-12-24 13:03:54Z sunpoet $

PORTNAME=	repoze.tm2
PORTVERSION=	2.1
PORTEPOCH=	2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Zope-like transaction manager via WSGI middleware

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}transaction>=0:devel/py-transaction

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
