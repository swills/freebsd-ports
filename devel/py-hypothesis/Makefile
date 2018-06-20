# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/devel/py-hypothesis/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	hypothesis
PORTVERSION=	3.56.10
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Library for property based testing

LICENSE=	MPL20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}attrs>=16.0.0:devel/py-attrs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}coverage>=0:devel/py-coverage@${PY_FLAVOR} \
		${PY_ENUM34} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>=0:databases/py-sqlite3@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

do-test:
	@(cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test)

.include <bsd.port.mk>
