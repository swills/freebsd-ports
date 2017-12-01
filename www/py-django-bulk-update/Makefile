# $FreeBSD: head/www/py-django-bulk-update/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	django-bulk-update
PORTVERSION=	2.2.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Bulk update using a single query over Django ORM

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django110>0:www/py-django110@${FLAVOR}

NO_ARCH=	yes
USES=		python:2.7-3.4
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
