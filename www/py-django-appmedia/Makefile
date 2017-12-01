# Created by: Kurt Lidl <kurt.lidl@cello.com>
# $FreeBSD: head/www/py-django-appmedia/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	django-appmedia
PORTVERSION=	1.0.1
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kurt.lidl@cello.com
COMMENT=	Serve static content from within django app directories

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18@${FLAVOR}

USES=		python:2
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
