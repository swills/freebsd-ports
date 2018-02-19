# Created by: Michelle Sullivan <michelle@sorbs.net>
# $FreeBSD: head/www/py-collective.templateengines/Makefile 462307 2018-02-19 11:10:43Z antoine $

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

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.CMFCore>=2.1.0:devel/py-Products.CMFCore@${FLAVOR}

USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
