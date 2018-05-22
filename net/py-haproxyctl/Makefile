# $FreeBSD: head/net/py-haproxyctl/Makefile 470262 2018-05-18 04:30:24Z koobs $

PORTNAME=	haproxyctl
PORTVERSION=	0.5
DISTVERSIONPREFIX=	v
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zhoutao@laocius.org
COMMENT=	HAProxy control tool

LICENSE=	GPLv3

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	neurogeek

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m nose -v haproxy/tests

.include <bsd.port.mk>
