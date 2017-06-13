# Created by: Michael Nottebrock <lofi@FreeBSD.org>
# $FreeBSD: head/databases/qt4-odbc-plugin/Makefile 442740 2017-06-06 05:00:56Z tcberner $

PORTREVISION=	4

DB=		odbc
COMMENT=	Qt Open Database Connectivity plugin

LIB_DEPENDS=	libodbc.so:databases/unixODBC

LDFLAGS+=	-lodbc

.include "${.CURDIR:H:H}/devel/qt4/Makefile.sqldrivers"
