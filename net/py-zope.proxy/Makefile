# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/net/py-zope.proxy/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	zope.proxy
PORTVERSION=	4.1.3
PORTREVISION=	1
CATEGORIES=	net python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Generic Transparent Proxies

LICENSE=	ZPL21

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=3.3.0:devel/py-zope.interface

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
