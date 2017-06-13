# $FreeBSD: head/textproc/py-snowballstemmer/Makefile 435683 2017-03-08 12:48:41Z kmoore $

PORTNAME=	snowballstemmer
PORTVERSION=	1.2.0
PORTREVISION=	1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	Snowball stemming library collection for Python

LICENSE=	BSD2CLAUSE

USES?=		python
USE_PYTHON=	distutils autoplist

OPTIONS_DEFINE=	PYSTEMMER
OPTIONS_DEFAULT=PYSTEMMER
PYSTEMMER_DESC=	Use PyStemmer to accelerate

PYSTEMMER_RUN_DEPENDS?=	${PYTHON_PKGNAMEPREFIX}pystemmer>0:textproc/py-pystemmer

.include <bsd.port.mk>
