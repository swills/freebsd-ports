# $FreeBSD: head/devel/py-archetypes.querywidget/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	archetypes.querywidget
PORTVERSION=	1.0.9
PORTREVISION=	1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Widget for creating catalog queries

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.app.querystring>=1.0.3:www/py-plone.app.querystring@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}plone.app.jquerytools>=0:www/py-plone.app.jquerytools@${FLAVOR}

USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
