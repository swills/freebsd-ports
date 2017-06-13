# Created by: David Naylor <dbn@FreeBSD.org>
# $FreeBSD: head/sysutils/py-plumbum/Makefile 430910 2017-01-09 05:42:52Z dbn $

PORTNAME=	plumbum
PORTVERSION=	1.6.3
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Shell combinators and more for python

LICENSE=	MIT

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils concurrent 
GH_ACCOUNT=	tomerfiliba

do-test:
	@(cd ${BUILD_WRKSRC}; ${SETENV} ${MAKE_ENV} ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test)
.include <bsd.port.mk>
