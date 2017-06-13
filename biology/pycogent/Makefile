# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/biology/pycogent/Makefile 419818 2016-08-08 11:21:04Z wen $

PORTNAME=	pycogent
PORTVERSION=	1.9
CATEGORIES=	biology python

MAINTAINER=	python@FreeBSD.org
COMMENT=	Toolkit for statistical analysis of biological sequences

LICENSE=	GPLv2

BUILD_DEPENDS=	${PYNUMPY} \
		${LOCALBASE}/bin/cython:lang/cython \
		${LOCALBASE}/bin/sphinx-build:textproc/py-sphinx \
		${PYTHON_PKGNAMEPREFIX}sqlalchemy10>=1.0.13:databases/py-sqlalchemy10
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:-2.7
USE_GITHUB=	yes
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
