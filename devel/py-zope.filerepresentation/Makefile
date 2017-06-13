# $FreeBSD: head/devel/py-zope.filerepresentation/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.filerepresentation
PORTVERSION=	3.6.1
PORTREVISION=	1
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	File-system Representation Interfaces

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}zope.schema>=0:devel/py-zope.schema

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
