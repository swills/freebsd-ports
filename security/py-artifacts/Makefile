# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: head/security/py-artifacts/Makefile 448815 2017-08-27 09:16:06Z antoine $

PORTNAME=	artifacts
PORTVERSION=	20170818
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP \
		https://github.com/ForensicArtifacts/artifacts/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	ForensicArtifacts.com Artifact Repository

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>=3.11:devel/py-yaml
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yapf>=0:textproc/py-yapf

NO_ARCH=	yes
USES=		python
USE_PYTHON=	concurrent distutils autoplist
DO_MAKE_TEST=	${SETENV} ${TEST_ENV} ${PYTHON_CMD}
TEST_TARGET=	run_tests.py

.include <bsd.port.mk>
