# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/graphics/py-pycha/Makefile 462208 2018-02-18 09:02:54Z amdmi3 $

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

CAIRO_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cairo>0:graphics/py-cairo@${FLAVOR}

.include <bsd.port.mk>
