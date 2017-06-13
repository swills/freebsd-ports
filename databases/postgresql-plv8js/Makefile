# Created by: vanilla@
# $FreeBSD: head/databases/postgresql-plv8js/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	plv8
PORTVERSION=	1.4.8
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	databases
PKGNAMEPREFIX=	postgresql${PGSQL_VER:S/.//}-
PKGNAMESUFFIX=	js

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	PL/v8js procedural language for PostgreSQL database

LICENSE=	PostgreSQL

LIB_DEPENDS+=	libv8.so:lang/v8

USES=		compiler:c++11-lang gmake perl5 pgsql:9.1+
USE_PERL5=	build
USE_GITHUB=	yes
PLIST_SUB+=	PORTVERSION="${PORTVERSION}"

.include <bsd.port.mk>
