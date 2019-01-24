# Created by: Martin Jackson <mhjacks@swbell.net>
# $FreeBSD: head/devel/py-pyasn1/Makefile 489920 2019-01-10 21:23:10Z sunpoet $

PORTNAME=	pyasn1
PORTVERSION=	0.4.5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mhjacks@swbell.net
COMMENT=	ASN.1 toolkit for Python

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
