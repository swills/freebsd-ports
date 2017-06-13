# $FreeBSD: head/devel/py-zope.minmax/Makefile 425174 2016-11-02 22:45:14Z mat $

PORTNAME=	zope.minmax
PORTVERSION=	1.1.2
PORTREVISION=	2
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Homogeneous values favoring maximum or minimum

LICENSE=	ZPL21

RUN_DEPENDS=	zodb${PYTHON_PKGNAMESUFFIX}>=0:databases/zodb3 \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
