# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-django-tastypie-mongoengine/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=		django-tastypie-mongoengine
PORTVERSION=		0.4.6
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=		devel
PKGNAMEPREFIX=		${PYTHON_PKGNAMEPREFIX}

MAINTAINER=		dvl@FreeBSD.org
COMMENT=		MongoEngine support for django-tastypie

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}django-tastypie>=0.9.12:www/py-django-tastypie@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mongoengine>=0.8.7:devel/py-mongoengine@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}django18>0:www/py-django18@${FLAVOR}

USE_GITHUB=		yes
GH_ACCOUNT=		wlanslovenija

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
