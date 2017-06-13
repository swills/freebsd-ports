# $FreeBSD: head/security/py-Products.PluggableAuthService/Makefile 413428 2016-04-16 10:36:51Z rm $

PORTNAME=	Products.PluggableAuthService
PORTVERSION=	1.11.0
CATEGORIES=	security python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Pluggable Zope2 authentication / authorization framework

LICENSE=	ZPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Products.PluginRegistry>=0:devel/py-Products.PluginRegistry \
		${PYTHON_PKGNAMEPREFIX}Products.GenericSetup>=0:devel/py-Products.GenericSetup

NO_ARCH=	yes
USES=		python:2.7 zope
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
