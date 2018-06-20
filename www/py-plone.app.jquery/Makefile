# $FreeBSD: head/www/py-plone.app.jquery/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	plone.app.jquery
PORTVERSION=	1.7.2.1
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	jQuery integration for Plone

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=0:devel/py-Products.CMFCore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>=0:devel/py-Products.GenericSetup@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
