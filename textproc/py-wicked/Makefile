# $FreeBSD: head/textproc/py-wicked/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	wicked
PORTVERSION=	1.1.12
CATEGORIES=	textproc python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Compact syntax for doing wiki-like content linking and creation

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.container>=0:devel/py-zope.container@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.lifecycleevent>=0:devel/py-zope.lifecycleevent@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:devel/py-zope.schema@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.traversing>=0:devel/py-zope.traversing@${FLAVOR}

USES=		python:2.7 zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
