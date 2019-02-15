# Created by: Carlo Strub
# $FreeBSD: head/www/py-dj21-django-mptt/Makefile 492690 2019-02-11 12:00:30Z kai $

PORTNAME=	django-mptt
PORTVERSION=	0.9.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}dj21-

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Utilities for implementing Modified Preorder Tree Traversal in Django

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django21>=1.11:www/py-django21@${PY_FLAVOR}\
		${PYTHON_PKGNAMEPREFIX}dj21-django-js-asset>0:www/py-dj21-django-js-asset@${PY_FLAVOR}

USES=		gettext python:3.5+
USE_PYTHON=	autoplist distutils

NO_ARCH=		yes
CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}django-happenings \
			${PYTHON_PKGNAMEPREFIX}django-mptt

.include <bsd.port.mk>
