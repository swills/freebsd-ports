# $FreeBSD: head/devel/py-Products.statusmessages/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	Products.statusmessages
PORTVERSION=	4.0
PORTREVISION=	1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Handling of internationalized status messages for Zope

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.annotation>=0:devel/py-zope.annotation@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.i18n>=0:devel/py-zope.i18n@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface@${PY_FLAVOR}

USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
