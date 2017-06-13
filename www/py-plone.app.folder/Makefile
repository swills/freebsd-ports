# $FreeBSD: head/www/py-plone.app.folder/Makefile 413428 2016-04-16 10:36:51Z rm $

PORTNAME=	plone.app.folder
PORTVERSION=	1.1.2
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Integration package for plone.folder into Plone

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.CMFCore>0:devel/py-Products.CMFCore \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>0:devel/py-Products.GenericSetup \
		${PYTHON_PKGNAMEPREFIX}plone.folder>0:www/py-plone.folder \
		${PYTHON_PKGNAMEPREFIX}plone.app.layout>0:www/py-plone.app.layout

NO_ARCH=	yes
USES=		python:2.7 zope
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
