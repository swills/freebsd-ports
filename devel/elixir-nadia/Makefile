# $FreeBSD: head/devel/elixir-nadia/Makefile 473948 2018-07-05 05:12:54Z olgeni $

PORTNAME=	nadia
DISTVERSIONPREFIX=	v
DISTVERSION=	0.4.4
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Telegram Bot API Wrapper written in Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	zhyu

MIX_BUILD_DEPS=	devel/elixir-poison \
		www/elixir-httpoison
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
