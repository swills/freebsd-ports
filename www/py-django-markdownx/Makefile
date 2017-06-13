# Created by: Carlo Strub
# $FreeBSD: head/www/py-django-markdownx/Makefile 432291 2017-01-23 21:13:44Z cs $

PORTNAME=	django-markdownx
PORTVERSION=	1.7.2
DISTVERSIONPREFIX=	v.
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Django Markdown editor with image uploads and live preview

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18 \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow

USE_GITHUB=	yes

GH_ACCOUNT=	adi-
USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
