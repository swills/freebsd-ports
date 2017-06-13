# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/databases/py-htsql-pgsql/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	htsql-pgsql
PORTVERSION=	2.3.3
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Database Query Language (PostgreSQL Backend for HTSQL)

LICENSE=	AGPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}htsql>2.3:databases/py-htsql \
		${PYTHON_PKGNAMEPREFIX}psycopg2>0:databases/py-psycopg2

USES=		python:2
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
