# $FreeBSD: head/www/py-plone.testing/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	plone.testing
PORTVERSION=	4.1.1
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Testing infrastructure for Zope and Plone projects

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.testing>=0:devel/py-zope.testing@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
