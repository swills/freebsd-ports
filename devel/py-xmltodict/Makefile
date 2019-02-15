# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/py-xmltodict/Makefile 492720 2019-02-11 18:59:31Z sunpoet $

PORTNAME=	xmltodict
PORTVERSION=	0.12.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XML parser that returns python dictionaries

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes
USE_LOCALE=	en_US.UTF-8

do-test:
	@cd ${WRKSRC} && ${LOCALBASE}/bin/nosetests-${PYTHON_VER}

.include <bsd.port.mk>
