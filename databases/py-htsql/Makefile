# Created by: jpaetzel
# $FreeBSD: head/databases/py-htsql/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	htsql
PORTVERSION=	2.3.3
PORTREVISION=	1
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tu}-${PORTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Database Query Language (Core & SQLite Backend)

LICENSE=	AGPLv3

USES=		python:2
USE_PYTHON=	distutils autoplist

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}yaml>0:devel/py-yaml \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3

.include <bsd.port.mk>
