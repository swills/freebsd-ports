# $FreeBSD: head/databases/elixir-db_connection/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	db_connection
DISTVERSION=	1.1.3
DISTVERSIONPREFIX=	v
CATEGORIES=	databases
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Database connection behaviour for Elixir

LICENSE=	APACHE20

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	elixir-ecto

MIX_BUILD_NAME=	shared
MIX_BUILD_DEPS=	devel/elixir-connection \
		devel/erlang-backoff
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
