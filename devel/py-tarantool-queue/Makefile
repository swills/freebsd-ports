# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/devel/py-tarantool-queue/Makefile 462745 2018-02-23 21:09:47Z rene $

PORTNAME=	tarantool-queue
PORTVERSION=	0.1.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python bindings for Tarantool queue

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tarantool>=0:databases/py-tarantool@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}msgpack-python>=0:devel/py-msgpack-python@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

do-configure:
	${REINPLACE_CMD} -i -e "1d" ${WRKSRC}/setup.py

.include <bsd.port.mk>
