# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/www/py-django-evolution/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	django-evolution
PORTVERSION=	0.7.6
PORTREVISION=	1
DISTVERSIONPREFIX=	release-
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Database schema evolution tool for the Django web framework

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django18

USE_GITHUB=	yes

GH_ACCOUNT=	beanbaginc
USES=		python
USE_PYTHON=	distutils autoplist

post-extract:
	${RM} -r ${WRKSRC}/tests

.include <bsd.port.mk>
