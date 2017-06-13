# Created by: John Hixson <john@ixsystems.com>
# $FreeBSD: head/www/py-django-json-rpc/Makefile 436558 2017-03-20 18:42:27Z araujo $

PORTNAME=	django-json-rpc
PORTVERSION=	0.6.2
PORTREVISION=	3
CATEGORIES=	www python
MASTER_SITES=	http://wiki.pcbsd.org/ports/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jhixson@gmail.com
COMMENT=	Simple JSON-RPC implementation for Django

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18

LICENSE=	MIT

USES=		python tar:bzip2
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
