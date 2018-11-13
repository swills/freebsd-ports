# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: head/databases/pg_stat_kcache/Makefile 484367 2018-11-06 23:46:05Z girgen $

PORTNAME=	pg_stat_kcache
PORTVERSION=	2.1.1
CATEGORIES=	databases

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	Gather statistics about PostgreSQL I/O and CPU usage

LICENSE=	PostgreSQL

USES=		gmake pgsql:9.4+
LLD_UNSAFE=	yes
WANT_PGSQL=	server contrib

USE_GITHUB=	yes
GH_ACCOUNT=	powa-team
GH_TAGNAME=	REL${PORTVERSION:S/./_/g}

pre-patch:
	@${MV} ${BUILD_WRKSRC}/README.rst ${BUILD_WRKSRC}/${PORTNAME}-README.rst

.include <bsd.port.mk>
