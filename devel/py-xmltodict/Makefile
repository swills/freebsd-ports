# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/py-xmltodict/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	xmltodict
PORTVERSION=	0.11.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XML parser that returns python dictionaries

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

do-test:
	@cd ${WRKSRC} && ${LOCALBASE}/bin/nosetests-${PYTHON_VER}

.include <bsd.port.mk>
