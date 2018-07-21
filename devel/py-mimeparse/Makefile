# Created by: William Grzybowski
# $FreeBSD: head/devel/py-mimeparse/Makefile 474889 2018-07-18 18:01:44Z gblach $

PORTNAME=	mimeparse
PORTVERSION=	1.6.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-${PORTNAME}-${PORTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Basic functions for handling mime-types in Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python
USE_PYTHON=	distutils autoplist

do-test:
		@(cd ${TEST_WRKSRC} && ${SETENV} ${TEST_ENV} python${PYTHON_VER} mimeparse_test.py)

.include <bsd.port.mk>
