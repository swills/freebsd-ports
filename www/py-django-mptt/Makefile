# Created by: Carlo Strub
# $FreeBSD: head/www/py-django-mptt/Makefile 432238 2017-01-23 15:36:43Z cs $

PORTNAME=	django-mptt
PORTVERSION=	0.8.7
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Utilities for implementing Modified Preorder Tree Traversal in Django

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18 # >= 1.8

CONFLICTS_INSTALL= py*-django-happenings

USE_GITHUB=	yes

USES=		gettext python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
