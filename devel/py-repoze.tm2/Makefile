# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-repoze.tm2/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	repoze.tm2
PORTVERSION=	2.1
PORTEPOCH=	2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Zope-like transaction manager via WSGI middleware

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}transaction>=0:devel/py-transaction@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
