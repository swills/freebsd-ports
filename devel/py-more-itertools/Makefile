# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/devel/py-more-itertools/Makefile 474319 2018-07-10 03:38:27Z miwi $

PORTNAME=	more-itertools
PORTVERSION=	4.2.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	More routines for operating on iterables, beyond itertools

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.0.0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
