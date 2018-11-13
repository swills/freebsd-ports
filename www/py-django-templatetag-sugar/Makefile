# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/www/py-django-templatetag-sugar/Makefile 484353 2018-11-06 21:13:54Z rene $

PORTNAME=	templatetag-sugar
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}django-
DISTNAME=	django-${PORTNAME}-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Library to make writing templatetags in Django sweet

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django111>=0:www/py-django111@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
