# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/databases/proftpd-mod_sql_sqlite/Makefile 414014 2016-04-25 16:13:38Z mat $

PORTNAME=	mod_sql_sqlite
PORTREVISION=	3
CATEGORIES=	databases ftp
PKGNAMEPREFIX=	proftpd-

MAINTAINER=	mm@FreeBSD.org
COMMENT=	SQLite ProFTPD module

LICENSE=	GPLv2

DESCR=		${.CURDIR}/pkg-descr

MASTERDIR=	${.CURDIR}/../../ftp/proftpd

USES=		sqlite

INCLUDEDIRS=	${LOCALBASE}/include
LIBDIRS=	${LOCALBASE}/lib

_BUILDING_PROFTPD_MODULE=	${PORTNAME}

.include "${MASTERDIR}/Makefile"
