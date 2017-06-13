# $FreeBSD: head/games/hypatia_engine/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	hypatia_engine
PORTVERSION=	0.3.1
CATEGORIES=	games python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lillian.lynn.lemmer@gmail.com
COMMENT=	Game engine for 2D top-down, tile-based action RPGs

LICENSE=	MIT

RUN_DEPENDS=	${PYGAME} \
		${PYTHON_PKGNAMEPREFIX}pyganim>0:graphics/py-pyganim \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow \
		${PYTHON_PKGNAMEPREFIX}enum34>0:devel/py-enum34

USES=		python:2
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
