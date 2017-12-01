# Created by: Martin Jackson <mhjacks@swbell.net>
# $FreeBSD: head/devel/py-pyasn1/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pyasn1
PORTVERSION=	0.3.7
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mhjacks@swbell.net
COMMENT=	ASN.1 toolkit for Python

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
