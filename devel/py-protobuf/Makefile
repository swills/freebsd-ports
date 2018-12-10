# Created by: vanilla@
# $FreeBSD: head/devel/py-protobuf/Makefile 486532 2018-12-03 19:55:29Z sunpoet $

PORTNAME=	protobuf
PORTVERSION=	3.6.1
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Google protobuf Python Client Library

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	protoc:devel/protobuf
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.9:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

DO_MAKE_TEST=	${PYTHON_CMD} ${PYDISTUTILS_SETUP}
NO_ARCH=	yes
TEST_TARGET=	test

.include <bsd.port.mk>
