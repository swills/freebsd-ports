# $FreeBSD: head/databases/elixir-timex_ecto/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	timex_ecto
PORTVERSION=	3.3.0
CATEGORIES=	databases
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Adapter for using Timex DateTimes with Ecto

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	bitwalker

MIX_BUILD_DEPS=	databases/elixir-ecto \
		devel/elixir-timex
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
