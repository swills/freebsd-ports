# Created by: Pedro Garcia Freitas <sawp@sawp.com.br>
# $FreeBSD: head/graphics/mahotas/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	mahotas
PORTVERSION=	0.9.6
PORTREVISION=	10
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sawp@sawp.com.br
COMMENT=	Computer vision and image processing library for Python

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	libfreeimage.so:graphics/freeimage

USE_GCC=	yes
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
