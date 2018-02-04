# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/graphics/py-pyembree/Makefile 460852 2018-02-03 22:13:14Z yuri $

PORTNAME=	pyembree
DISTVERSION=	0.1.3
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python wrapper for Embree

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYNUMPY}
LIB_DEPENDS=	libembree.so:graphics/embree
RUN_DEPENDS=	${PYNUMPY}

USES=		localbase python
USE_PYTHON=	autoplist distutils cython
USE_GITHUB=	yes
GH_ACCOUNT=	scopatz

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/pyembree/*.so

.include <bsd.port.mk>
