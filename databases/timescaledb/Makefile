# Created by: Kevin Bowling <kbowling@freebsd.org>
# $FreeBSD: head/databases/timescaledb/Makefile 445049 2017-07-05 06:33:05Z swills $

PORTNAME=	timescaledb
PORTVERSION=	0.1.0
CATEGORIES=	databases

MAINTAINER=	kbowling@FreeBSD.org
COMMENT=	Time-series database built on PostgreSQL

LICENSE=	APACHE20

USE_GITHUB=	YES
GH_ACCOUNT=	timescale

MAKE_ARGS=	PG_CONFIG=${LOCALBASE}/bin/pg_config USE_PGXS=1 \
		install_bin=/usr/bin/install
USE_LDCONFIG=	yes
USES=		compiler:c11 gmake pgsql:9.6

PLIST_FILES=	lib/postgresql/timescaledb.so \
		share/postgresql/extension/timescaledb--0.1.0.sql \
		share/postgresql/extension/timescaledb.control

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/timescaledb.so

.include <bsd.port.mk>
