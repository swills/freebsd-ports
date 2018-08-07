# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/py-py-ubjson/Makefile 476436 2018-08-05 19:07:08Z sunpoet $

PORTNAME=	py-ubjson
PORTVERSION=	0.12.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Universal Binary JSON encoder/decoder

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	autoplist concurrent distutils
USES=		python

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/_ubjson.so

.include <bsd.port.mk>
