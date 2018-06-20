# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/devel/py-canonicaljson/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	canonicaljson
PORTVERSION=	1.1.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Canonical JSON

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}frozendict>=1.0:devel/py-frozendict@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}simplejson>=3.6.5:devel/py-simplejson@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

do-test:
	@(cd ${WRKSRC} && ${PYTHON_CMD} -m pytest)

.include <bsd.port.mk>
