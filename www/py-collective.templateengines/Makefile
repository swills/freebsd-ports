# Created by: Michelle Sullivan <michelle@sorbs.net>
# $FreeBSD: head/www/py-collective.templateengines/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	collective.templateengines
PORTVERSION=	0.3.5
PORTREVISION=	1
CATEGORIES=	www python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	michelle@sorbs.net
COMMENT=	Template engine abstraction layer for Python

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=2.1.0:devel/py-Products.CMFCore@${PY_FLAVOR}

USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
