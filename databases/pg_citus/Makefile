# Created by: Matthew Seaman
# $FreeBSD: head/databases/pg_citus/Makefile 446141 2017-07-18 13:01:26Z matthew $

PORTNAME=	citus
PORTVERSION=	6.2.3
DISTVERSIONPREFIX=	v
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
