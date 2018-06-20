# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/graphics/py-pycha/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pycha
PORTVERSION=	0.7.0
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for making charts with Python

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

OPTIONS_DEFINE=		CAIRO
OPTIONS_DEFAULT=	CAIRO

CAIRO_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cairo>0:graphics/py-cairo@${PY_FLAVOR}

.include <bsd.port.mk>
