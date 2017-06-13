# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/devel/py-coverage/Makefile 434267 2017-02-17 03:42:24Z lwhsu $

PORTNAME=	coverage
PORTVERSION=	4.3.4
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
