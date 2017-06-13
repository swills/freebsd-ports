# $FreeBSD: head/converters/py-rencode/Makefile 441167 2017-05-18 16:04:02Z sunpoet $

PORTNAME=	rencode
PORTVERSION=	1.0.5
CATEGORIES=	converters devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	R-encoding and r-decoding implementation

LICENSE=	GPLv3

BUILD_DEPENDS=	cython:lang/cython

USE_PYTHON=	autoplist distutils
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/rencode/_rencode.so

.include <bsd.port.mk>
