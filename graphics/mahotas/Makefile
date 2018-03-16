# Created by: Pedro Garcia Freitas <sawp@sawp.com.br>
# $FreeBSD: head/graphics/mahotas/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	mahotas
PORTVERSION=	0.9.6
PORTREVISION=	8
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
