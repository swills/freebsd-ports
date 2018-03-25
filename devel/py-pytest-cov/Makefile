# $FreeBSD: head/devel/py-pytest-cov/Makefile 464818 2018-03-17 13:52:04Z dbaio $

PORTNAME=	pytest-cov
PORTVERSION=	2.5.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Pytest plugin for measuring coverage

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coverage>=3.7.1:devel/py-coverage@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest>=2.6.0:devel/py-pytest@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

.include <bsd.port.mk>
