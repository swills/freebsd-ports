# $FreeBSD: head/graphics/py-PyOpenGL-accelerate/Makefile 455210 2017-11-30 15:50:30Z mat $

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

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

USE_PYTHON=	autoplist distutils cython
USES=		python

.include <bsd.port.mk>
