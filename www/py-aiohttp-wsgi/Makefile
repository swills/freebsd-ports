# $FreeBSD: head/www/py-aiohttp-wsgi/Makefile 443593 2017-06-14 17:19:32Z wg $

PORTNAME=	aiohttp-wsgi
PORTVERSION=	0.7.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	WSGI adapter for aiohttp

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}aiohttp>0:www/py-aiohttp

USES=		python:3.4+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
