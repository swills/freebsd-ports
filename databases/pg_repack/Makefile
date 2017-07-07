# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/databases/pg_repack/Makefile 445133 2017-07-06 10:10:08Z tz $

PORTNAME=	pg_repack
PORTVERSION=	1.4.0.1
DISTVERSIONPREFIX=	ver_
CATEGORIES=	databases
PKGNAMEPREFIX=	postgresql${PGSQL_VER:S/.//}-

MAINTAINER=	amutu@amutu.com
COMMENT=	Reorganize tables in PostgreSQL databases with minimal locks

LICENSE=	BSD3CLAUSE

USES=		gmake pgsql:9.2+
USE_GITHUB=	yes
GH_ACCOUNT=	reorg

WANT_PGSQL=	server

PLIST_FILES=	bin/pg_repack \
		lib/postgresql/pg_repack.so \
		share/postgresql/extension/pg_repack--1.4.0.sql \
		share/postgresql/extension/pg_repack.control

post-install:
	        ${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/pg_repack \
		       ${STAGEDIR}${PREFIX}/lib/postgresql/pg_repack.so

.include <bsd.port.mk>
