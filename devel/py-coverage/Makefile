# $FreeBSD: head/devel/py-coverage/Makefile 495624 2019-03-13 17:14:25Z lwhsu $

PORTNAME=	coverage
PORTVERSION=	4.5.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Code coverage measurement for Python

LICENSE=	BSD2CLAUSE

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/coverage/tracer.so

.include <bsd.port.mk>
