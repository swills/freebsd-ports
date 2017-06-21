# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/databases/postgresql-cstore_fdw/Makefile 443496 2017-06-13 10:28:30Z tz $

PORTNAME=	cstore_fdw
PORTVERSION=	1.5.1
DISTVERSIONPREFIX=	v
CATEGORIES=	databases
PKGNAMEPREFIX=	postgresql${PGSQL_VER:S/.//}-

MAINTAINER=	amutu@amutu.com
COMMENT=	Columnar store for analytics with PostgreSQL

LICENSE=	PostgreSQL

LIB_DEPENDS=	libprotobuf-c.so:devel/protobuf-c

USES=		gmake pgsql:9.3+
USE_GITHUB=	yes
GH_ACCOUNT=	citusdata

WANT_PGSQL=	server

.include <bsd.port.mk>
