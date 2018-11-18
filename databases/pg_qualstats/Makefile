# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: head/databases/pg_qualstats/Makefile 485068 2018-11-16 09:46:38Z girgen $

PORTNAME=	pg_qualstats
PORTVERSION=	1.0.7
CATEGORIES=	databases

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	PostgreSQL extension for collecting statistics about predicates

LICENSE=	PostgreSQL

USE_GITHUB=	yes
GH_ACCOUNT=	powa-team

USES=		gmake pgsql:9.4+
LLD_UNSAFE=	yes
WANT_PGSQL=	server

pre-patch:
	@${MV} ${BUILD_WRKSRC}/doc/README.md ${BUILD_WRKSRC}/doc/${PORTNAME}-README.md

.include <bsd.port.mk>
