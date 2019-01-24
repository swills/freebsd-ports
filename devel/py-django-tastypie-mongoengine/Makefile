# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-django-tastypie-mongoengine/Makefile 489708 2019-01-08 15:25:16Z sunpoet $

PORTNAME=		django-tastypie-mongoengine
PORTVERSION=		0.4.6
PORTREVISION=	3
DISTVERSIONPREFIX=	v
CATEGORIES=		devel
PKGNAMEPREFIX=		${PYTHON_PKGNAMEPREFIX}

MAINTAINER=		dvl@FreeBSD.org
COMMENT=		MongoEngine support for django-tastypie

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}django-tastypie>=0.9.12:www/py-django-tastypie@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mongoengine>=0.8.7:databases/py-mongoengine@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django111>0:www/py-django111@${PY_FLAVOR}

USE_GITHUB=		yes
GH_ACCOUNT=		wlanslovenija

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
