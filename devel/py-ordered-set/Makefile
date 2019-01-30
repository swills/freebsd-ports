# Created by: antoine@FreeBSD.org
# $FreeBSD: head/devel/py-ordered-set/Makefile 491442 2019-01-27 22:03:56Z antoine $

PORTNAME=	ordered-set
PORTVERSION=	3.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	MutableSet that remembers its order, so that every entry has an index

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=0:devel/py-pytest@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

do-test:
	@(cd ${TEST_WRKSRC} && ${SETENV} ${TEST_ENV} pytest-${PYTHON_VER} test.py)

.include <bsd.port.mk>
