# Created by: Matthew X. Economou <xenophon+fbsdports@irtnog.org>
# $FreeBSD: head/www/py-django-filer/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	django-filer
PORTVERSION=	0.8.6
PORTREVISION=	3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	xenophon+fbsdports@irtnog.org
COMMENT=	File and Image Management Application for django

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>=0:www/py-django18@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django-easy-thumbnails>=0:graphics/py-django-easy-thumbnails@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pillow>=0:graphics/py-pillow@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
