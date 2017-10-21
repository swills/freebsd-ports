# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/devel/py-coverage/Makefile 452498 2017-10-20 03:49:22Z lwhsu $

PORTNAME=	coverage
PORTVERSION=	4.4.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Code coverage measurement for Python

LICENSE=	BSD2CLAUSE

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/coverage/tracer.so

.include <bsd.port.mk>
