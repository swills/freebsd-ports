# $FreeBSD: head/www/elixir-phoenix_ecto/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	phoenix_ecto
PORTVERSION=	3.3.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Ecto integration for the Phoenix framework

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	phoenixframework

MIX_BUILD_DEPS=	databases/elixir-ecto \
		devel/elixir-plug \
		devel/elixir-poison \
		www/elixir-phoenix_html
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
