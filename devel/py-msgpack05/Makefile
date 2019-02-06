# Created by: Andrey Zonov <andrey@zonov.org>
# $FreeBSD: head/devel/py-msgpack05/Makefile 492173 2019-02-04 22:32:09Z sunpoet $

PORTNAME=	msgpack
PORTVERSION=	0.5.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	05

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	MessagePack (de)serializer for Python

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python
USE_PYTHON=	autoplist distutils

PORTSCOUT=	limit:^0\.5\.

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/msgpack/_packer.so
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/msgpack/_unpacker.so

.include <bsd.port.mk>
