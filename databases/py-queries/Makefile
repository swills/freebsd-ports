# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/databases/py-queries/Makefile 454423 2017-11-18 11:21:52Z gblach $

PORTNAME=	queries
PORTVERSION=	1.10.3
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Simplified PostgreSQL client built upon Psycopg2

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}psycopg2>=2.5.1:databases/py-psycopg2

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
