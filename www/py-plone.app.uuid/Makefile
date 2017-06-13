# $FreeBSD: head/www/py-plone.app.uuid/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	plone.app.uuid
PORTVERSION=	1.1
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Plone integration for the basic plone.uuid package

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.uuid>=0:www/py-plone.uuid \
		${PYTHON_PKGNAMEPREFIX}plone.indexer>=0:www/py-plone.indexer \
		${PYTHON_PKGNAMEPREFIX}zope.publisher>=0:devel/py-zope.publisher \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface

NO_ARCH=	yes
USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
