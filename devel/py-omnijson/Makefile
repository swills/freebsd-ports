# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/devel/py-omnijson/Makefile 448632 2017-08-23 17:44:44Z antoine $

PORTNAME=	omnijson
PORTVERSION=	0.1.2
DISTVERSIONPREFIX=	v
PORTREVISION=	2
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Wraps the best Python JSON installed

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest

USE_GITHUB=	yes
GH_ACCOUNT=	kennethreitz

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m pytest

.include <bsd.port.mk>
