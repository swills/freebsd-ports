# $FreeBSD: head/net/elixir-kafka_ex/Makefile 486946 2018-12-08 13:04:01Z vanilla $

PORTNAME=	kafka_ex
PORTVERSION=	0.9.0
CATEGORIES=	net
PKGNAMEPREFIX=	elixir-

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Apache Kafka client for Elixir

LICENSE=	MIT

MIX_BUILD_DEPS=	archivers/erlang-snappy
MIX_RUN_DEPS=	archivers/erlang-snappy

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	jacklund
NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
