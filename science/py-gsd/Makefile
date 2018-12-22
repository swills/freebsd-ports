# $FreeBSD: head/science/py-gsd/Makefile 487950 2018-12-21 05:02:15Z yuri $

PORTNAME=	gsd
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.0
CATEGORIES=	science python
MASTER_SITES=	http://glotzerlab.engin.umich.edu/Downloads/gsd/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	GSD (General Simulation Data) file format for Python

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYNUMPY}
BUILD_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
