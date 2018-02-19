# Created by: Kurt Lidl <kurt.lidl@cello.com>
# $FreeBSD: head/www/py-django-appmedia/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	django-appmedia
PORTVERSION=	1.0.1
PORTREVISION=	3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kurt.lidl@cello.com
COMMENT=	Serve static content from within django app directories

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
