# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: head/devel/py-dtfabric/Makefile 470775 2018-05-24 12:28:04Z antoine $

PORTNAME=	dtfabric
PORTVERSION=	20180522
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP \
		https://github.com/libyal/dtfabric/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Tooling for data type and structure management

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>=0:devel/py-yaml@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

do-test:
	@(cd ${TEST_WRKSRC} && ${SETENV} ${TEST_ENV} ${PYTHON_CMD} run_tests.py)

.include <bsd.port.mk>
