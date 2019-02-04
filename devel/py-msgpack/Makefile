# Created by: Andrey Zonov <andrey@zonov.org>
# $FreeBSD: head/devel/py-msgpack/Makefile 492088 2019-02-03 23:59:27Z sunpoet $

PORTNAME=	msgpack
PORTVERSION=	0.6.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	MessagePack (de)serializer for Python

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python
USE_PYTHON=	autoplist concurrent cython distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/msgpack/_cmsgpack.so

.include <bsd.port.mk>
