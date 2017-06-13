# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/multimedia/py-flvlib/Makefile 440241 2017-05-06 07:40:39Z miwi $

PORTNAME=	flvlib
PORTVERSION=	0.1.13
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	Parsing, manipulating and indexing FLV files

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:2 tar:bzip2
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
