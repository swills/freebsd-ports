# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/graphics/py-pycha/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pycha
PORTVERSION=	0.7.0
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for making charts with Python

LICENSE=	LGPL3

USES=		python
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=		CAIRO
OPTIONS_DEFAULT=	CAIRO

CAIRO_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cairo>0:graphics/py-cairo@${FLAVOR}

.include <bsd.port.mk>
