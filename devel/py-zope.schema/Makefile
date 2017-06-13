# $FreeBSD: head/devel/py-zope.schema/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	zope.schema
PORTVERSION=	4.2.2
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Interface extension for defining data schemas

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=3.6.0:devel/py-zope.interface \
		${PYTHON_PKGNAMEPREFIX}zope.event>=0:devel/py-zope.event

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
