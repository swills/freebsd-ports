# Created by: Marc G. Fournier <scrappy@FreeBSD.org>
# $FreeBSD: head/databases/postgresql10-server/Makefile 451550 2017-10-08 16:39:59Z girgen $

DISTVERSION?=	10.0
PKGNAMESUFFIX?= ${PORTVERSION:R}${COMPONENT}
PORTREVISION?=	1

MAINTAINER?=	pgsql@FreeBSD.org

INSTALL_DIRS?=	src/common src/timezone src/backend \
		src/backend/utils/mb/conversion_procs \
		src/backend/snowball src/backend/replication/libpqwalreceiver \
		src/bin/initdb src/bin/pg_ctl \
		src/bin/pg_controldata src/bin/pg_resetwal src/pl \
		src/bin/pg_basebackup src/bin/pg_archivecleanup \
		src/bin/pg_rewind \
		src/bin/pg_test_fsync src/bin/pg_test_timing \
		src/bin/pg_waldump src/bin/pg_upgrade

PG_USER?=	postgres
PG_GROUP?=	postgres
PG_UID?=	770

.if defined(SERVER_ONLY)
CONFIGURE_ARGS+=--with-icu
LIB_DEPENDS+=	libicudata.so:devel/icu
USES+=		pkgconfig
.endif

.include "${.CURDIR}/../postgresql92-server/Makefile"
