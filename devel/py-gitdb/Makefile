# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/py-gitdb/Makefile 412346 2016-04-01 14:00:51Z mat $

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

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}smmap>=0.8.5:devel/py-smmap

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/gitdb/_perf.so

.include <bsd.port.mk>
