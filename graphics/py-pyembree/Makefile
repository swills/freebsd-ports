# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/graphics/py-pyembree/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pyembree
PORTVERSION=	0.1.0
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	Python wrapper for Embree

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN=		fails to configure

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	libembree.so:graphics/embree
RUN_DEPENDS=	${PYNUMPY}

USES=		localbase python:2
USE_PYTHON=	autoplist distutils cython
USE_GITHUB=	yes
GH_ACCOUNT=	scopatz

.include <bsd.port.mk>
