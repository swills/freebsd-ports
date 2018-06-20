# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/devel/py-arrow/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	arrow
PORTVERSION=	0.12.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Better dates and times for Python

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>=2.1:devel/py-dateutil@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3000
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}backports.functools_lru_cache>=0:devel/py-backports.functools_lru_cache@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
