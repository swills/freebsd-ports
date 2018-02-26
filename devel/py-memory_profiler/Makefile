# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/py-memory_profiler/Makefile 462914 2018-02-25 05:32:46Z sunpoet $

PORTNAME=	memory_profiler
PORTVERSION=	0.52.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for monitoring memory usage of a python program

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psutil>=0:sysutils/py-psutil@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

.include <bsd.port.mk>
