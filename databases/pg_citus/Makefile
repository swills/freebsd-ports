# Created by: Matthew Seaman
# $FreeBSD: head/databases/pg_citus/Makefile 444463 2017-06-27 13:46:53Z sunpoet $

PORTNAME=	citus
PORTVERSION=	6.2.2
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	databases
PKGNAMEPREFIX=	pg_

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Horizontally scale Postgresql using sharding and replication

LICENSE=	AGPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	citusdata

USES=		gmake pgsql:9.5+ autoreconf readline
WANT_PGSQL=	lib server
GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip
MAKE_ARGS=	INSTALL="${INSTALL} -c"

.include <bsd.port.mk>
