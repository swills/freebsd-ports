# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: head/security/py-artifacts/Makefile 487914 2018-12-20 19:53:23Z antoine $

PORTNAME=	artifacts
PORTVERSION=	20181213
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP \
		https://github.com/ForensicArtifacts/artifacts/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	ForensicArtifacts.com Artifact Repository

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>=3.11:devel/py-yaml@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${PY_FLAVOR} \
		yapf:textproc/py-yapf

NO_ARCH=	yes
USES=		python
USE_LOCALE=	en_US.UTF-8
USE_PYTHON=	distutils autoplist concurrent
DO_MAKE_TEST=	${SETENV} ${TEST_ENV} ${PYTHON_CMD}
TEST_TARGET=	run_tests.py

post-patch:
	${REINPLACE_CMD} "s,share/artifacts,${DATADIR_REL}," ${WRKSRC}/setup.py

.include <bsd.port.mk>
