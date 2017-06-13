# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-repoze.what/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	repoze.what
PORTVERSION=	1.0.9
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Authorization for WSGI applications

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Paste>=1.7.2:www/py-paste \
		${PYTHON_PKGNAMEPREFIX}repoze.who-testutil>=0:devel/py-repoze.who-testutil
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
