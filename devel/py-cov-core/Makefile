# Created by: Fukang Chen <loader@FreeBSD.org>
# $FreeBSD: head/devel/py-cov-core/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	cov-core
PORTVERSION=	1.15.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	loader@FreeBSD.org
COMMENT=	Plugin core for use by pytest-cov, nose-cov and nose2-cov

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coverage>=3.6:devel/py-coverage@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
