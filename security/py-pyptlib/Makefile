# Created by: Carlo Strub
# $FreeBSD: head/security/py-pyptlib/Makefile 457499 2017-12-29 09:01:54Z antoine $

PORTNAME=	pyptlib
PORTVERSION=	0.0.6
CATEGORIES=	security net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Pluggable transport library

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
