# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: head/databases/pg_stat_kcache/Makefile 473169 2018-06-24 00:54:27Z linimon $

PORTNAME=	pg_stat_kcache
DISTVERSIONPREFIX=	REL
DISTVERSION=	2_0_3
CATEGORIES=	databases

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	Gather statistics about PostgreSQL I/O and CPU usage

LICENSE=	PostgreSQL

USES=		gmake pgsql:9.4+
LLD_UNSAFE=	yes
WANT_PGSQL=	server contrib

USE_GITHUB=	yes
GH_ACCOUNT=	dalibo

pre-patch:
	@${MV} ${BUILD_WRKSRC}/README.rst ${BUILD_WRKSRC}/${PORTNAME}-README.rst

.include <bsd.port.mk>
