# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/devel/py-cbor2/Makefile 492575 2019-02-10 00:08:37Z sunpoet $

PORTNAME=	cbor2
PORTVERSION=	4.1.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Pure Python CBOR (de)serializer with extensive tag support

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	autoplist concurrent distutils

USE_LOCALE=	en_US.UTF-8

.include <bsd.port.mk>
