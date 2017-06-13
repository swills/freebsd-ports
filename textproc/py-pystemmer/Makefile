# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/textproc/py-pystemmer/Makefile 440442 2017-05-08 17:21:49Z dbaio $

PORTNAME=	pystemmer
PORTVERSION=	1.3.0
PORTREVISION=	1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP \
		http://snowball.tartarus.org/wrappers/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyStemmer-${PORTVERSION}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Snowball Stemming Algorithms for Information Retrieval

LICENSE=	MIT BSD3CLAUSE
LICENSE_COMB=	dual

USES?=		python
USE_PYTHON=	distutils autoplist

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/Stemmer.so

.include <bsd.port.mk>
