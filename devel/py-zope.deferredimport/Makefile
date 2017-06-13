# $FreeBSD: head/devel/py-zope.deferredimport/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.deferredimport
PORTVERSION=	3.5.3
PORTREVISION=	1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Allows to import names that will be resolved when used in the code

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.proxy>=0:net/py-zope.proxy

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
