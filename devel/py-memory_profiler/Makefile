# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/py-memory_profiler/Makefile 478385 2018-08-29 19:09:25Z sunpoet $

PORTNAME=	memory_profiler
PORTVERSION=	0.54.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for monitoring memory usage of a python program

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psutil>=0:sysutils/py-psutil@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

.include <bsd.port.mk>
