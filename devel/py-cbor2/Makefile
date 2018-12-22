# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-cbor2/Makefile 487240 2018-12-11 16:12:54Z dvl $

PORTNAME=	cbor2
PORTVERSION=	4.1.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Pure Python CBOR (de)serializer with extensive tag support

LICENSE=	MIT

USES=		python:2.7
USE_PYTHON=	autoplist concurrent distutils

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm@${PY_FLAVOR}

.include <bsd.port.mk>
