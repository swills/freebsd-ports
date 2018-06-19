# $FreeBSD: head/www/elixir-httpoison/Makefile 472000 2018-06-08 13:43:25Z olgeni $

PORTNAME=	httpoison
PORTVERSION=	0.13.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	HTTP client for Elixir powered by hackney

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	edgurgel

MIX_BUILD_DEPS=	www/erlang-hackney
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}

.include <bsd.port.mk>
