# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/science/pybrain/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	pybrain
PORTVERSION=	0.3.3
PORTREVISION=	1
CATEGORIES=	science python

MAINTAINER=	wen@FreeBSD.org
COMMENT=	PyBrain is the swiss army knife for neural networking

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scipy>=0.7.1:science/py-scipy@${FLAVOR}

USE_GITHUB=	yes

USES=		python
USE_PYTHON=	autoplist distutils concurrent optsuffix

.include <bsd.port.mk>
