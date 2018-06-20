# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/devel/py-pex/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pex
PORTVERSION=	1.2.7
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	PEX packaging toolchain

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}wheel>=0.24.0:devel/py-wheel@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
