# $FreeBSD: head/www/py-plone.app.blob/Makefile 413428 2016-04-16 10:36:51Z rm $

PORTNAME=	plone.app.blob
PORTVERSION=	1.5.17
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	ZODB blob support for Plone

LICENSE=	GPLv2

RUN_DEPENDS=	zodb${PYTHON_PKGNAMESUFFIX}>=3.8.1:databases/zodb3 \
		${PYTHON_PKGNAMEPREFIX}zope.proxy>=3.4:net/py-zope.proxy \
		${PYTHON_PKGNAMEPREFIX}archetypes.schemaextender>=1.6:devel/py-archetypes.schemaextender \
		${PYTHON_PKGNAMEPREFIX}plone.app.imaging>1.0:www/py-plone.app.imaging \
		${PYTHON_PKGNAMEPREFIX}plone.scale>=0:www/py-plone.scale

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
