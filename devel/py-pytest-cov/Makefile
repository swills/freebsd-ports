# $FreeBSD: head/devel/py-pytest-cov/Makefile 449992 2017-09-17 11:10:45Z dbaio $

PORTNAME=	pytest-cov
PORTVERSION=	2.5.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Pytest plugin for measuring coverage

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coverage>=3.7.1:devel/py-coverage \
		${PYTHON_PKGNAMEPREFIX}pytest>=2.6.0:devel/py-pytest

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
