# $FreeBSD: head/devel/py-Products.ExtendedPathIndex/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	Products.ExtendedPathIndex
PORTVERSION=	3.1
PORTREVISION=	1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope catalog index for paths

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}AccessControl>0:security/py-AccessControl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}transaction>0:devel/py-transaction@${PY_FLAVOR} \
		zodb${PYTHON_PKGNAMESUFFIX}>0:databases/zodb3@${PY_FLAVOR}

USES=		python:2.7 zope zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
