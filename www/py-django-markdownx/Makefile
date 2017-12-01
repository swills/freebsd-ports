# Created by: Carlo Strub
# $FreeBSD: head/www/py-django-markdownx/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	django-markdownx
PORTVERSION=	2.0.21
DISTVERSIONPREFIX=	v
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Django Markdown editor with image uploads and live preview

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${FLAVOR}

USE_GITHUB=	yes

GH_ACCOUNT=	neutronX
USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
