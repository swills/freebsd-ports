# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/databases/py-queries/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	queries
PORTVERSION=	2.0.0
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Simplified PostgreSQL client built upon Psycopg2

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psycopg2>=2.5.1:databases/py-psycopg2@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
