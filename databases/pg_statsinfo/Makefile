# $FreeBSD: head/databases/pg_statsinfo/Makefile 423076 2016-10-01 15:58:41Z antoine $

PORTNAME=	pg_statsinfo
PORTVERSION=	2.4.1
PORTREVISION=	1
CATEGORIES=	databases
MASTER_SITES=	http://pgfoundry.org/frs/download.php/3429/

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Monitor statistics and activity of PostgreSQL

USES=		gmake pgsql:9.2
WANT_PGSQL=	server

MAKE_ARGS=	USE_PGXS=1 LDFLAGS=-lkvm

.include <bsd.port.mk>
