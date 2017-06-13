# $FreeBSD: head/www/py-plone.behavior/Makefile 413428 2016-04-16 10:36:51Z rm $

PORTNAME=	plone.behavior
PORTVERSION=	1.1.1
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Infrastructure for maintaining a registry of available behaviors

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.component>0:devel/py-zope.component \
		${PYTHON_PKGNAMEPREFIX}zope.interface>0:devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}zope.schema>0:devel/py-zope.schema \
		${PYTHON_PKGNAMEPREFIX}zope.annotation>0:devel/py-zope.annotation \
		${PYTHON_PKGNAMEPREFIX}zope.configuration>0:devel/py-zope.configuration

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
