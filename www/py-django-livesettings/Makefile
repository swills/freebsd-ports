# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: head/www/py-django-livesettings/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	django-livesettings
DISTVERSION=	1.4-16
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP/source/d/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Configure Django project settings via admin interface

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_hg>=0.4:devel/py-setuptools_hg@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django18>0:www/py-django18@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
