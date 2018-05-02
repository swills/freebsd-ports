# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/databases/py-tarantool/Makefile 468233 2018-04-24 19:47:15Z sunpoet $

PORTNAME=	tarantool
PORTVERSION=	0.6.1
PORTREVISION=	2
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Client library for Tarantool Database

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msgpack>=0.4:devel/py-msgpack@${FLAVOR}

NO_ARCH=	yes
REINPLACE_ARGS=	-i ''
USES=		python tar:bz2
USE_PYTHON=	autoplist concurrent distutils

post-patch:
	@${REINPLACE_CMD} -e 's|msgpack-python|msgpack|' ${WRKSRC}/setup.py ${WRKSRC}/tarantool.egg-info/requires.txt

.include <bsd.port.mk>
