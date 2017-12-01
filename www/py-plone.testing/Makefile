# $FreeBSD: head/www/py-plone.testing/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	plone.testing
PORTVERSION=	4.1.1
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Testing infrastructure for Zope and Plone projects

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.testing>=0:devel/py-zope.testing@${FLAVOR}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
