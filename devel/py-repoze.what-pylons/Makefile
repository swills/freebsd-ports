# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-repoze.what-pylons/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	repoze.what-pylons
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	The repoze.what v1 plugin for Pylons/TG2 integration

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pylons>=0.9.7:www/py-pylons \
		${PYTHON_PKGNAMEPREFIX}repoze.what>=0:devel/py-repoze.what \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=3.5.2:devel/py-zope.interface
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
