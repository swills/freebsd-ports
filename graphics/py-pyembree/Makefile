# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/graphics/py-pyembree/Makefile 440242 2017-05-06 07:43:45Z miwi $

PORTNAME=	pyembree
PORTVERSION=	0.1.0
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	Python wrapper for Embree

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	cython:lang/cython \
		${PYNUMPY}
LIB_DEPENDS=	libembree.so:graphics/embree
RUN_DEPENDS=	${PYNUMPY}

USES=		localbase python:2
USE_PYTHON=	autoplist distutils
USE_GITHUB=	yes
GH_ACCOUNT=	scopatz

.include <bsd.port.mk>
