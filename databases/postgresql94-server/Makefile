# Created by: Marc G. Fournier <scrappy@FreeBSD.org>
# $FreeBSD: head/databases/postgresql94-server/Makefile 449278 2017-09-05 09:27:11Z girgen $

DISTVERSION?=	9.4.14
PORTREVISION=	0

MAINTAINER?=	pgsql@FreeBSD.org

INSTALL_DIRS?=	src/common src/timezone src/backend \
		src/backend/utils/mb/conversion_procs \
		src/backend/snowball src/backend/replication/libpqwalreceiver \
		src/bin/initdb src/bin/pg_ctl \
		src/bin/pg_controldata src/bin/pg_resetxlog src/pl \
		src/bin/pg_basebackup

ICU_PATCHFILE=	pg-949-icu-2016-10-02.diff.gz

.include "${.CURDIR}/../postgresql92-server/Makefile"
