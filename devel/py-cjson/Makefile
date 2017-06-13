# Created by: Li-Wen Hsu <lwhsu@lwhsu.org>
# $FreeBSD: head/devel/py-cjson/Makefile 437443 2017-04-01 15:56:44Z lwhsu $

PORTNAME=	cjson
PORTVERSION=	1.2.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-cjson-${PORTVERSION}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Fast JSON encoder/decoder for Python

LICENSE=	LGPL20

USES=		python
USE_PYTHON=	distutils autoplist

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/cjson.so

.include <bsd.port.mk>
