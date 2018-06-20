# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/www/py-django-evolution/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	django-evolution
PORTVERSION=	0.7.7
PORTREVISION=	1
DISTVERSIONPREFIX=	release-
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Database schema evolution tool for the Django web framework

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:www/py-django111@${PY_FLAVOR}

USE_GITHUB=	yes

GH_ACCOUNT=	beanbaginc
USES=		python:2.7
USE_PYTHON=	distutils autoplist

post-extract:
	${RM} -r ${WRKSRC}/tests

.include <bsd.port.mk>
