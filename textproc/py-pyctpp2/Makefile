# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/textproc/py-pyctpp2/Makefile 462745 2018-02-23 21:09:47Z rene $

PORTNAME=	pyctpp2
PORTVERSION=	0.12.2
PORTREVISION=	4
CATEGORIES=	textproc
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python interface to CTPP2 library

LICENSE=	MIT

LIB_DEPENDS=	libctpp2.so:textproc/ctpp2

# Python3 ready
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
