# $FreeBSD: head/converters/py-rencode/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	rencode
PORTVERSION=	1.0.5
CATEGORIES=	converters devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	R-encoding and r-decoding implementation

LICENSE=	GPLv3

USE_PYTHON=	autoplist distutils cython
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/rencode/_rencode.so

.include <bsd.port.mk>
