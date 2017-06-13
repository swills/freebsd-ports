# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: head/www/py-django-hijack/Makefile 440238 2017-05-06 07:36:39Z miwi $

PORTNAME=	django-hijack
PORTVERSION=	2.1.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Allows DJango superusers to login as other users

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
