# $FreeBSD: head/www/py-aiohttp-wsgi/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	aiohttp-wsgi
PORTVERSION=	0.8.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	WSGI adapter for aiohttp

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}aiohttp>0:www/py-aiohttp@${PY_FLAVOR}

USES=		python:3.4+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
