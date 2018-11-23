# Created by: David Thiel <lx@FreeBSD.org>
# $FreeBSD: head/databases/rocksdb-lite/Makefile 485251 2018-11-18 19:30:59Z antoine $

PORTREVISION=	1

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Persistent key-value store for fast storage environments (lite version)

LITE=		yes
MASTERDIR=	${.CURDIR}/../rocksdb

BROKEN=		fails to build
BROKEN_armv6=		does not build: db/compaction_job.cc:714:52: error: implicit conversion loses integer precision: 'uint64_t' (aka 'unsigned long long') to 'const size_t' (aka 'const unsigned int')
BROKEN_armv7=		does not build: db/compaction_job.cc:714:52: error: implicit conversion loses integer precision: 'uint64_t' (aka 'unsigned long long') to 'const size_t' (aka 'const unsigned int')

.include "${MASTERDIR}/Makefile"
