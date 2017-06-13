# $FreeBSD: head/www/apache22-worker-mpm/Makefile 424560 2016-10-24 10:18:50Z mat $

MASTERDIR=		${.CURDIR}/../apache22

MAINTAINER=		apache@FreeBSD.org

WITH_MPM=		worker

DESCR=			${.CURDIR}/pkg-descr

PORT_OPTIONS+=		CGID
OPTIONS_EXCLUDE=	CGI

.include "${MASTERDIR}/Makefile"
