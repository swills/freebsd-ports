# $FreeBSD: head/www/py-plone.app.search/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	plone.app.search
PORTVERSION=	1.1.8
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Search user interface for Plone CMS

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}plone.app.contentlisting>=0:www/py-plone.app.contentlisting@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python:2.7 zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
