# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/net/py-twitter-tools/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	twitter
PORTVERSION=	1.17.1
DISTVERSIONPREFIX=	${PORTNAME}-
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	-tools

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python API and command-line toolset for Twitter

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${PY_FLAVOR}

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:2.7
USE_PYTHON=	distutils concurrent autoplist
USE_GITHUB=	yes

GH_ACCOUNT=	sixohsix

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
