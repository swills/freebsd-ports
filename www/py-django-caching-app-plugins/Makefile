# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: head/www/py-django-caching-app-plugins/Makefile 453284 2017-11-01 13:10:35Z olgeni $

PORTNAME=	django-caching-app-plugins
PORTVERSION=	0.1.4
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Django app for writing pluggable reusable django applications

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_hg>=0.4:devel/py-setuptools_hg
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
