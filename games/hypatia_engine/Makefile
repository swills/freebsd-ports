# $FreeBSD: head/games/hypatia_engine/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	hypatia_engine
PORTVERSION=	0.3.1
CATEGORIES=	games python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lillian.lynn.lemmer@gmail.com
COMMENT=	Game engine for 2D top-down, tile-based action RPGs

LICENSE=	MIT

RUN_DEPENDS=	${PYGAME} \
		${PYTHON_PKGNAMEPREFIX}pyganim>0:graphics/py-pyganim@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pillow>0:graphics/py-pillow@${FLAVOR} \
		${PY_ENUM34}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
