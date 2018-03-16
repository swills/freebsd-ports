# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/science/py-mlpy/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	mlpy
PORTVERSION=	3.5.0
PORTREVISION=	5
CATEGORIES=	science python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	High performance Python package for predictive modeling

LICENSE=	GPLv3

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	libgsl.so:math/gsl

USE_LDCONFIG=	yes
CFLAGS+=	-I${LOCALBASE}/include -I${PYTHON_SITELIBDIR}/numpy/core
LDFLAGS+=	-L${LOCALBASE}/lib
USES=		python
USE_PYTHON=	distutils autoplist cython

.include <bsd.port.mk>
