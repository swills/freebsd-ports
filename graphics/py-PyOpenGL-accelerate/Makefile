# $FreeBSD: head/graphics/py-PyOpenGL-accelerate/Makefile 414964 2016-05-10 21:29:04Z pi $

PORTNAME=	PyOpenGL
PORTVERSION=	3.1.0
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	-accelerate
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	OpenGL acceleration code for PyOpenGL

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	cython:lang/cython \
		${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USE_PYTHON=	autoplist distutils
USES=		python

.include <bsd.port.mk>
