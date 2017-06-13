# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: head/www/py-django-signals-ahoy/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	django-signals-ahoy
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP/source/d/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-${PORTVERSION:C/([[:digit:]]\.[[:digit:]])\./\1-/g}

MAINTAINER=	ports@caomhin.org
COMMENT=	Extended set of signals for use by Django apps

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
