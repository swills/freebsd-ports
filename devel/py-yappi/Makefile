# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/py-yappi/Makefile 490745 2019-01-19 20:41:20Z sunpoet $

PORTNAME=	yappi
PORTVERSION=	0.99
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Yet Another Python Profiler

LICENSE=	MIT

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/_yappi.so

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
