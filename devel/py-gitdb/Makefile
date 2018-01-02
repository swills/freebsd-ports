# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-gitdb/Makefile 457398 2017-12-27 19:52:15Z sunpoet $

PORTNAME=	gitdb
PORTVERSION=	0.6.4
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Pure Python git object database

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Use devel/py-gitdb2 instead
EXPIRATION_DATE=2018-01-31

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}smmap>=0.8.5:devel/py-smmap@${FLAVOR}

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}gitdb2

USES=		python:2.7
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/gitdb/_perf.so

.include <bsd.port.mk>
