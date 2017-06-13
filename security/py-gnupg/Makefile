# Created by: ijliao
# $FreeBSD: head/security/py-gnupg/Makefile 429112 2016-12-21 20:46:03Z cs $

PORTNAME=	gnupg
PORTVERSION=	2.2.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Python wrapper for GnuPG

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psutil>=0.5.1:sysutils/py-psutil

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
