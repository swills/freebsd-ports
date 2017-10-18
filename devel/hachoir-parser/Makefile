# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/devel/hachoir-parser/Makefile 451426 2017-10-07 06:11:17Z antoine $

PORTNAME=	hachoir-parser
PORTVERSION=	1.3.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Parsers of most common file formats

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/hachoir_core/__init__.py:devel/hachoir-core
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/hachoir_core/__init__.py:devel/hachoir-core

USES=		python:2.7
USE_PYTHON=	distutils

.include <bsd.port.mk>
