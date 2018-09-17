# $FreeBSD: head/net/elixir-kafka_ex/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	kafka_ex
PORTVERSION=	0.6.4
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
