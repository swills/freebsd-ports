# $FreeBSD: head/databases/sqliteodbc-sqlite2/Makefile 455167 2017-11-30 06:13:34Z linimon $

PORTNAME=	sqliteodbc
CATEGORIES=	databases
PKGNAMESUFFIX=	-sqlite2

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	ODBC driver for SQLite 2

MASTERDIR=	${.CURDIR}/../sqliteodbc

BROKEN_aarch64=	fails to compile: error: passing char * to parameter of incompatible type va_list
BROKEN_armv6=	fails to compile: error: passing char * to parameter of incompatible type va_list
BROKEN_armv7=		fails to compile: error: passing char * to parameter of incompatible type va_list

.include "${MASTERDIR}/Makefile"
