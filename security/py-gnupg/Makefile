# Created by: ijliao
# $FreeBSD: head/security/py-gnupg/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	gnupg
PORTVERSION=	2.3.1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Python wrapper for GnuPG

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psutil>=0.5.1:sysutils/py-psutil@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
