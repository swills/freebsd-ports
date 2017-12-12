# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/devel/py-funcsigs/Makefile 455456 2017-12-03 20:36:21Z sunpoet $

PORTNAME=	funcsigs
PORTVERSION=	1.0.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python function signatures from PEP362

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

do-test:
	cd ${WRKSRC}/ && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
