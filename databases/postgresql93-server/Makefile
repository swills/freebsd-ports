# Created by: Marc G. Fournier <scrappy@FreeBSD.org>
# $FreeBSD: head/databases/postgresql93-server/Makefile 440628 2017-05-11 14:28:22Z girgen $

DISTVERSION?=	9.3.17
PKGNAMESUFFIX?=	${DISTVERSION:R:S/.//}${COMPONENT}

MAINTAINER?=	pgsql@FreeBSD.org

INSTALL_DIRS?=	src/common src/timezone src/backend \
		src/backend/utils/mb/conversion_procs \
		src/backend/snowball src/backend/replication/libpqwalreceiver \
		src/bin/initdb src/bin/pg_ctl \
		src/bin/pg_controldata src/bin/pg_resetxlog src/pl \
		src/bin/pg_basebackup

ICU_PATCHFILE?= pg-9314-icu-2016-08-10.diff.gz

.include "${.CURDIR}/../postgresql92-server/Makefile"
