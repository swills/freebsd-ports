# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: head/databases/pg_stat_kcache/Makefile 423248 2016-10-04 09:55:54Z girgen $

PORTNAME=	pg_stat_kcache
DISTVERSIONPREFIX=	REL
DISTVERSION=	2_0_3
CATEGORIES=	databases

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	Gather statistics about PostgreSQL I/O and CPU usage

LICENSE=	PostgreSQL

USE_GITHUB=	yes
GH_ACCOUNT=	dalibo

USES=		gmake pgsql:9.4+
WANT_PGSQL=	server contrib

pre-patch:
	@${MV} ${BUILD_WRKSRC}/README.rst ${BUILD_WRKSRC}/${PORTNAME}-README.rst

.include <bsd.port.mk>
