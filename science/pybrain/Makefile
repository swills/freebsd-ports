# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/science/pybrain/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	pybrain
PORTVERSION=	0.3.3
PORTREVISION=	2
CATEGORIES=	science python

MAINTAINER=	wen@FreeBSD.org
COMMENT=	PyBrain is the swiss army knife for neural networking

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scipy>=0.7.1:science/py-scipy@${PY_FLAVOR}

USE_GITHUB=	yes

USES=		python
USE_PYTHON=	autoplist distutils concurrent optsuffix

.include <bsd.port.mk>
